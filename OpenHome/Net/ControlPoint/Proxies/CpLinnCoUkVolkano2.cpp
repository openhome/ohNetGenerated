#include "CpLinnCoUkVolkano2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncRebootLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
};

class SyncBootModeLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaMode;
};

class SyncSetBootModeLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
};

class SyncBspTypeLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaBspType;
};

class SyncUglyNameLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaUglyName;
};

class SyncIpAddressLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaIpAddress;
};

class SyncIpAddressListLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaIpAddressList;
};

class SyncMacAddressLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaMacAddress;
};

class SyncMacAddressListLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaMacAddressList;
};

class SyncProductIdLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaProductNumber;
};

class SyncBoardIdLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaBoardNumber;
};

class SyncBoardTypeLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaBoardNumber;
};

class SyncMaxBoardsLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, TUint& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    TUint& iaMaxBoards;
};

class SyncSoftwareVersionLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaSoftwareVersion;
};

class SyncSoftwareUpdateLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    TBool& iaAvailable;
    Brh& iaSoftwareVersion;
};

class SyncDeviceInfoLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaDeviceInfoXml;
};

class SyncCoreBoardIdLinnCoUkVolkano2 : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkVolkano2& iService;
    Brh& iaCoreBoardId;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncRebootLinnCoUkVolkano2

SyncRebootLinnCoUkVolkano2::SyncRebootLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}

// SyncBootModeLinnCoUkVolkano2

SyncBootModeLinnCoUkVolkano2::SyncBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}

// SyncSetBootModeLinnCoUkVolkano2

SyncSetBootModeLinnCoUkVolkano2::SyncSetBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}

// SyncBspTypeLinnCoUkVolkano2

SyncBspTypeLinnCoUkVolkano2::SyncBspTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}

// SyncUglyNameLinnCoUkVolkano2

SyncUglyNameLinnCoUkVolkano2::SyncUglyNameLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}

// SyncIpAddressLinnCoUkVolkano2

SyncIpAddressLinnCoUkVolkano2::SyncIpAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}

// SyncIpAddressListLinnCoUkVolkano2

SyncIpAddressListLinnCoUkVolkano2::SyncIpAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}

// SyncMacAddressLinnCoUkVolkano2

SyncMacAddressLinnCoUkVolkano2::SyncMacAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}

// SyncMacAddressListLinnCoUkVolkano2

SyncMacAddressListLinnCoUkVolkano2::SyncMacAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}

// SyncProductIdLinnCoUkVolkano2

SyncProductIdLinnCoUkVolkano2::SyncProductIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}

// SyncBoardIdLinnCoUkVolkano2

SyncBoardIdLinnCoUkVolkano2::SyncBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}

// SyncBoardTypeLinnCoUkVolkano2

SyncBoardTypeLinnCoUkVolkano2::SyncBoardTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}

// SyncMaxBoardsLinnCoUkVolkano2

SyncMaxBoardsLinnCoUkVolkano2::SyncMaxBoardsLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, TUint& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}

// SyncSoftwareVersionLinnCoUkVolkano2

SyncSoftwareVersionLinnCoUkVolkano2::SyncSoftwareVersionLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}

// SyncSoftwareUpdateLinnCoUkVolkano2

SyncSoftwareUpdateLinnCoUkVolkano2::SyncSoftwareUpdateLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}

// SyncDeviceInfoLinnCoUkVolkano2

SyncDeviceInfoLinnCoUkVolkano2::SyncDeviceInfoLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}

// SyncCoreBoardIdLinnCoUkVolkano2

SyncCoreBoardIdLinnCoUkVolkano2::SyncCoreBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2& aProxy, Brh& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano2::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}


// CpProxyLinnCoUkVolkano2

CpProxyLinnCoUkVolkano2::CpProxyLinnCoUkVolkano2(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano2::~CpProxyLinnCoUkVolkano2()
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

void CpProxyLinnCoUkVolkano2::SyncReboot()
{
    SyncRebootLinnCoUkVolkano2 sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReboot, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2::SyncBootMode(Brh& aaMode)
{
    SyncBootModeLinnCoUkVolkano2 sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndBootMode(IAsync& aAsync, Brh& aaMode)
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

void CpProxyLinnCoUkVolkano2::SyncSetBootMode(const Brx& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano2 sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2::SyncBspType(Brh& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano2 sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndBspType(IAsync& aAsync, Brh& aaBspType)
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

void CpProxyLinnCoUkVolkano2::SyncUglyName(Brh& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano2 sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndUglyName(IAsync& aAsync, Brh& aaUglyName)
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

void CpProxyLinnCoUkVolkano2::SyncIpAddress(Brh& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano2 sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndIpAddress(IAsync& aAsync, Brh& aaIpAddress)
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

void CpProxyLinnCoUkVolkano2::SyncIpAddressList(Brh& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano2 sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndIpAddressList(IAsync& aAsync, Brh& aaIpAddressList)
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

void CpProxyLinnCoUkVolkano2::SyncMacAddress(Brh& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano2 sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndMacAddress(IAsync& aAsync, Brh& aaMacAddress)
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

void CpProxyLinnCoUkVolkano2::SyncMacAddressList(Brh& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano2 sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndMacAddressList(IAsync& aAsync, Brh& aaMacAddressList)
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

void CpProxyLinnCoUkVolkano2::SyncProductId(Brh& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano2 sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndProductId(IAsync& aAsync, Brh& aaProductNumber)
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

void CpProxyLinnCoUkVolkano2::SyncBoardId(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano2 sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2::EndBoardId(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2::SyncBoardType(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano2 sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2::EndBoardType(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2::SyncMaxBoards(TUint& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano2 sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano2::SyncSoftwareVersion(Brh& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano2 sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2::SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano2 sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2::SyncDeviceInfo(Brh& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano2 sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml)
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

void CpProxyLinnCoUkVolkano2::SyncCoreBoardId(Brh& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano2 sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2::EndCoreBoardId(IAsync& aAsync, Brh& aaCoreBoardId)
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

void CpProxyLinnCoUkVolkano2::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMacAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCoreBoardIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano2::PropertyDeviceInfo(Brhz& aDeviceInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceInfo.Set(iDeviceInfo->Value());
}

void CpProxyLinnCoUkVolkano2::PropertyIpAddressList(Brhz& aIpAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIpAddressList.Set(iIpAddressList->Value());
}

void CpProxyLinnCoUkVolkano2::PropertyMacAddressList(Brhz& aMacAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMacAddressList.Set(iMacAddressList->Value());
}

void CpProxyLinnCoUkVolkano2::PropertyCoreBoardId(Brhz& aCoreBoardId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCoreBoardId.Set(iCoreBoardId->Value());
}

void CpProxyLinnCoUkVolkano2::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano2::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano2::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano2::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}


void CpProxyLinnCoUkVolkano2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkVolkano2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkVolkano2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkVolkano2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkVolkano2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkVolkano2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkVolkano2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkVolkano2::Version() const
{
  return iCpProxy.Version();
}


