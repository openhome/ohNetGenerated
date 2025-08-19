#include "CpLinnCoUkVolkano3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncRebootLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
};

class SyncBootModeLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaMode;
};

class SyncSetBootModeLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
};

class SyncBspTypeLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaBspType;
};

class SyncUglyNameLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaUglyName;
};

class SyncIpAddressLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaIpAddress;
};

class SyncIpAddressListLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaIpAddressList;
};

class SyncMacAddressLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaMacAddress;
};

class SyncMacAddressListLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaMacAddressList;
};

class SyncProductIdLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaProductNumber;
};

class SyncBoardIdLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaBoardNumber;
};

class SyncBoardTypeLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaBoardNumber;
};

class SyncMaxBoardsLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, TUint& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    TUint& iaMaxBoards;
};

class SyncSoftwareVersionLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaSoftwareVersion;
};

class SyncSoftwareUpdateLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    TBool& iaAvailable;
    Brh& iaSoftwareVersion;
};

class SyncDeviceInfoLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaDeviceInfoXml;
};

class SyncCoreBoardIdLinnCoUkVolkano3 : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano3& iService;
    Brh& iaCoreBoardId;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncRebootLinnCoUkVolkano3

SyncRebootLinnCoUkVolkano3::SyncRebootLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}

// SyncBootModeLinnCoUkVolkano3

SyncBootModeLinnCoUkVolkano3::SyncBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}

// SyncSetBootModeLinnCoUkVolkano3

SyncSetBootModeLinnCoUkVolkano3::SyncSetBootModeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}

// SyncBspTypeLinnCoUkVolkano3

SyncBspTypeLinnCoUkVolkano3::SyncBspTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}

// SyncUglyNameLinnCoUkVolkano3

SyncUglyNameLinnCoUkVolkano3::SyncUglyNameLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}

// SyncIpAddressLinnCoUkVolkano3

SyncIpAddressLinnCoUkVolkano3::SyncIpAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}

// SyncIpAddressListLinnCoUkVolkano3

SyncIpAddressListLinnCoUkVolkano3::SyncIpAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}

// SyncMacAddressLinnCoUkVolkano3

SyncMacAddressLinnCoUkVolkano3::SyncMacAddressLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}

// SyncMacAddressListLinnCoUkVolkano3

SyncMacAddressListLinnCoUkVolkano3::SyncMacAddressListLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}

// SyncProductIdLinnCoUkVolkano3

SyncProductIdLinnCoUkVolkano3::SyncProductIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}

// SyncBoardIdLinnCoUkVolkano3

SyncBoardIdLinnCoUkVolkano3::SyncBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}

// SyncBoardTypeLinnCoUkVolkano3

SyncBoardTypeLinnCoUkVolkano3::SyncBoardTypeLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}

// SyncMaxBoardsLinnCoUkVolkano3

SyncMaxBoardsLinnCoUkVolkano3::SyncMaxBoardsLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, TUint& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}

// SyncSoftwareVersionLinnCoUkVolkano3

SyncSoftwareVersionLinnCoUkVolkano3::SyncSoftwareVersionLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}

// SyncSoftwareUpdateLinnCoUkVolkano3

SyncSoftwareUpdateLinnCoUkVolkano3::SyncSoftwareUpdateLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}

// SyncDeviceInfoLinnCoUkVolkano3

SyncDeviceInfoLinnCoUkVolkano3::SyncDeviceInfoLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}

// SyncCoreBoardIdLinnCoUkVolkano3

SyncCoreBoardIdLinnCoUkVolkano3::SyncCoreBoardIdLinnCoUkVolkano3(CpProxyLinnCoUkVolkano3& aProxy, Brh& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano3::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}


// CpProxyLinnCoUkVolkano3

CpProxyLinnCoUkVolkano3::CpProxyLinnCoUkVolkano3(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3::IpAddressPropertyChanged);
    iIpAddress = new PropertyString("IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano3::~CpProxyLinnCoUkVolkano3()
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

void CpProxyLinnCoUkVolkano3::SyncReboot()
{
    SyncRebootLinnCoUkVolkano3 sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReboot, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano3::SyncBootMode(Brh& aaMode)
{
    SyncBootModeLinnCoUkVolkano3 sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndBootMode(IAsync& aAsync, Brh& aaMode)
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

void CpProxyLinnCoUkVolkano3::SyncSetBootMode(const Brx& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano3 sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano3::SyncBspType(Brh& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano3 sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndBspType(IAsync& aAsync, Brh& aaBspType)
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

void CpProxyLinnCoUkVolkano3::SyncUglyName(Brh& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano3 sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndUglyName(IAsync& aAsync, Brh& aaUglyName)
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

void CpProxyLinnCoUkVolkano3::SyncIpAddress(Brh& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano3 sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndIpAddress(IAsync& aAsync, Brh& aaIpAddress)
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

void CpProxyLinnCoUkVolkano3::SyncIpAddressList(Brh& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano3 sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndIpAddressList(IAsync& aAsync, Brh& aaIpAddressList)
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

void CpProxyLinnCoUkVolkano3::SyncMacAddress(Brh& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano3 sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndMacAddress(IAsync& aAsync, Brh& aaMacAddress)
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

void CpProxyLinnCoUkVolkano3::SyncMacAddressList(Brh& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano3 sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndMacAddressList(IAsync& aAsync, Brh& aaMacAddressList)
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

void CpProxyLinnCoUkVolkano3::SyncProductId(Brh& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano3 sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndProductId(IAsync& aAsync, Brh& aaProductNumber)
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

void CpProxyLinnCoUkVolkano3::SyncBoardId(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano3 sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano3::EndBoardId(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano3::SyncBoardType(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano3 sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano3::EndBoardType(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano3::SyncMaxBoards(TUint& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano3 sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano3::SyncSoftwareVersion(Brh& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano3 sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano3::SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano3 sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano3::SyncDeviceInfo(Brh& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano3 sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml)
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

void CpProxyLinnCoUkVolkano3::SyncCoreBoardId(Brh& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano3 sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3::EndCoreBoardId(IAsync& aAsync, Brh& aaCoreBoardId)
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

void CpProxyLinnCoUkVolkano3::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMacAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCoreBoardIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3::PropertyDeviceInfo(Brhz& aDeviceInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceInfo.Set(iDeviceInfo->Value());
}

void CpProxyLinnCoUkVolkano3::PropertyIpAddress(Brhz& aIpAddress) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIpAddress.Set(iIpAddress->Value());
}

void CpProxyLinnCoUkVolkano3::PropertyIpAddressList(Brhz& aIpAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIpAddressList.Set(iIpAddressList->Value());
}

void CpProxyLinnCoUkVolkano3::PropertyMacAddressList(Brhz& aMacAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMacAddressList.Set(iMacAddressList->Value());
}

void CpProxyLinnCoUkVolkano3::PropertyCoreBoardId(Brhz& aCoreBoardId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCoreBoardId.Set(iCoreBoardId->Value());
}

void CpProxyLinnCoUkVolkano3::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano3::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyLinnCoUkVolkano3::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano3::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano3::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}


void CpProxyLinnCoUkVolkano3::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkVolkano3::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkVolkano3::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkVolkano3::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkVolkano3::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkVolkano3::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkVolkano3::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkVolkano3::Version() const
{
  return iCpProxy.Version();
}


