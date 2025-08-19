#include "CpLinnCoUkVolkano2.h"
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


class SyncRebootLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
};

SyncRebootLinnCoUkVolkano2Cpp::SyncRebootLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaMode;
};

SyncBootModeLinnCoUkVolkano2Cpp::SyncBootModeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
};

SyncSetBootModeLinnCoUkVolkano2Cpp::SyncSetBootModeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaBspType;
};

SyncBspTypeLinnCoUkVolkano2Cpp::SyncBspTypeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano2Cpp::SyncUglyNameLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncIpAddressLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaIpAddress;
};

SyncIpAddressLinnCoUkVolkano2Cpp::SyncIpAddressLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}


class SyncIpAddressListLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressListLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaIpAddressList;
};

SyncIpAddressListLinnCoUkVolkano2Cpp::SyncIpAddressListLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}


class SyncMacAddressLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano2Cpp::SyncMacAddressLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncMacAddressListLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressListLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaMacAddressList;
};

SyncMacAddressListLinnCoUkVolkano2Cpp::SyncMacAddressListLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}


class SyncProductIdLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano2Cpp::SyncProductIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano2Cpp::SyncBoardIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano2Cpp::SyncBoardTypeLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, uint32_t& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    uint32_t& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano2Cpp::SyncMaxBoardsLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, uint32_t& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano2Cpp::SyncSoftwareVersionLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    bool& iaAvailable;
    std::string& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano2Cpp::SyncSoftwareUpdateLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano2Cpp::SyncDeviceInfoLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}


class SyncCoreBoardIdLinnCoUkVolkano2Cpp : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCoreBoardIdLinnCoUkVolkano2Cpp() {}
private:
    CpProxyLinnCoUkVolkano2Cpp& iService;
    std::string& iaCoreBoardId;
};

SyncCoreBoardIdLinnCoUkVolkano2Cpp::SyncCoreBoardIdLinnCoUkVolkano2Cpp(CpProxyLinnCoUkVolkano2Cpp& aProxy, std::string& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}


CpProxyLinnCoUkVolkano2Cpp::CpProxyLinnCoUkVolkano2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Volkano", 2, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2Cpp::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2Cpp::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2Cpp::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2Cpp::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano2Cpp::~CpProxyLinnCoUkVolkano2Cpp()
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

void CpProxyLinnCoUkVolkano2Cpp::SyncReboot()
{
    SyncRebootLinnCoUkVolkano2Cpp sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReboot, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncBootMode(std::string& aaMode)
{
    SyncBootModeLinnCoUkVolkano2Cpp sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndBootMode(IAsync& aAsync, std::string& aaMode)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncSetBootMode(const std::string& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano2Cpp sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginSetBootMode(const std::string& aaMode, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2Cpp::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncBspType(std::string& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano2Cpp sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndBspType(IAsync& aAsync, std::string& aaBspType)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncUglyName(std::string& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano2Cpp sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndUglyName(IAsync& aAsync, std::string& aaUglyName)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncIpAddress(std::string& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano2Cpp sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndIpAddress(IAsync& aAsync, std::string& aaIpAddress)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncIpAddressList(std::string& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano2Cpp sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndIpAddressList(IAsync& aAsync, std::string& aaIpAddressList)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncMacAddress(std::string& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano2Cpp sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndMacAddress(IAsync& aAsync, std::string& aaMacAddress)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncMacAddressList(std::string& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano2Cpp sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndMacAddressList(IAsync& aAsync, std::string& aaMacAddressList)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncProductId(std::string& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano2Cpp sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndProductId(IAsync& aAsync, std::string& aaProductNumber)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncBoardId(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano2Cpp sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginBoardId(uint32_t aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2Cpp::EndBoardId(IAsync& aAsync, std::string& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncBoardType(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano2Cpp sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginBoardType(uint32_t aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2Cpp::EndBoardType(IAsync& aAsync, std::string& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncMaxBoards(uint32_t& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano2Cpp sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndMaxBoards(IAsync& aAsync, uint32_t& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncSoftwareVersion(std::string& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano2Cpp sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndSoftwareVersion(IAsync& aAsync, std::string& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncSoftwareUpdate(bool& aaAvailable, std::string& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano2Cpp sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndSoftwareUpdate(IAsync& aAsync, bool& aaAvailable, std::string& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncDeviceInfo(std::string& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano2Cpp sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndDeviceInfo(IAsync& aAsync, std::string& aaDeviceInfoXml)
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

void CpProxyLinnCoUkVolkano2Cpp::SyncCoreBoardId(std::string& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano2Cpp sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2Cpp::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2Cpp::EndCoreBoardId(IAsync& aAsync, std::string& aaCoreBoardId)
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

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMacAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCoreBoardIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2Cpp::PropertyDeviceInfo(std::string& aDeviceInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceInfo->Value();
    aDeviceInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano2Cpp::PropertyIpAddressList(std::string& aIpAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIpAddressList->Value();
    aIpAddressList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano2Cpp::PropertyMacAddressList(std::string& aMacAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMacAddressList->Value();
    aMacAddressList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano2Cpp::PropertyCoreBoardId(std::string& aCoreBoardId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iCoreBoardId->Value();
    aCoreBoardId.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano2Cpp::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano2Cpp::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano2Cpp::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano2Cpp::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}

void CpProxyLinnCoUkVolkano2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkVolkano2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkVolkano2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkVolkano2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkVolkano2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkVolkano2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkVolkano2Cpp::Version() const
{
  return iCpProxy.Version();
}

