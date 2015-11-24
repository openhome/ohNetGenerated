#include "CpLinnCoUkVolkano1.h"
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

class CpProxyLinnCoUkVolkano1C : public CpProxyC
{
public:
    CpProxyLinnCoUkVolkano1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkVolkano1C();
    //CpProxyLinnCoUkVolkano1* Proxy() { return static_cast<CpProxyLinnCoUkVolkano1*>(iProxy); }

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

    void SyncMacAddress(Brh& aaMacAddress);
    void BeginMacAddress(FunctorAsync& aFunctor);
    void EndMacAddress(IAsync& aAsync, Brh& aaMacAddress);

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


private:
private:
    Mutex iLock;
    Action* iActionReboot;
    Action* iActionBootMode;
    Action* iActionSetBootMode;
    Action* iActionBspType;
    Action* iActionUglyName;
    Action* iActionMacAddress;
    Action* iActionProductId;
    Action* iActionBoardId;
    Action* iActionBoardType;
    Action* iActionMaxBoards;
    Action* iActionSoftwareVersion;
    Action* iActionSoftwareUpdate;
    Action* iActionDeviceInfo;
};


class SyncRebootLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
};

SyncRebootLinnCoUkVolkano1C::SyncRebootLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaMode;
};

SyncBootModeLinnCoUkVolkano1C::SyncBootModeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
};

SyncSetBootModeLinnCoUkVolkano1C::SyncSetBootModeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaBspType;
};

SyncBspTypeLinnCoUkVolkano1C::SyncBspTypeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano1C::SyncUglyNameLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncMacAddressLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano1C::SyncMacAddressLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncProductIdLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano1C::SyncProductIdLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano1C::SyncBoardIdLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano1C::SyncBoardTypeLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, TUint& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    TUint& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano1C::SyncMaxBoardsLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, TUint& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano1C::SyncSoftwareVersionLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    TBool& iaAvailable;
    Brh& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano1C::SyncSoftwareUpdateLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano1C : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano1C() {};
private:
    CpProxyLinnCoUkVolkano1C& iService;
    Brh& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano1C::SyncDeviceInfoLinnCoUkVolkano1C(CpProxyLinnCoUkVolkano1C& aProxy, Brh& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}

CpProxyLinnCoUkVolkano1C::CpProxyLinnCoUkVolkano1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Volkano", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionMacAddress = new Action("MacAddress");
    param = new OpenHome::Net::ParameterString("aMacAddress");
    iActionMacAddress->AddOutputParameter(param);

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
}

CpProxyLinnCoUkVolkano1C::~CpProxyLinnCoUkVolkano1C()
{
    DestroyService();
    delete iActionReboot;
    delete iActionBootMode;
    delete iActionSetBootMode;
    delete iActionBspType;
    delete iActionUglyName;
    delete iActionMacAddress;
    delete iActionProductId;
    delete iActionBoardId;
    delete iActionBoardType;
    delete iActionMaxBoards;
    delete iActionSoftwareVersion;
    delete iActionSoftwareUpdate;
    delete iActionDeviceInfo;
}

void CpProxyLinnCoUkVolkano1C::SyncReboot()
{
    SyncRebootLinnCoUkVolkano1C sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReboot, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano1C::SyncBootMode(Brh& aaMode)
{
    SyncBootModeLinnCoUkVolkano1C sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndBootMode(IAsync& aAsync, Brh& aaMode)
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

void CpProxyLinnCoUkVolkano1C::SyncSetBootMode(const Brx& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano1C sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaMode));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano1C::SyncBspType(Brh& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano1C sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndBspType(IAsync& aAsync, Brh& aaBspType)
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

void CpProxyLinnCoUkVolkano1C::SyncUglyName(Brh& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano1C sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndUglyName(IAsync& aAsync, Brh& aaUglyName)
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

void CpProxyLinnCoUkVolkano1C::SyncMacAddress(Brh& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano1C sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndMacAddress(IAsync& aAsync, Brh& aaMacAddress)
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

void CpProxyLinnCoUkVolkano1C::SyncProductId(Brh& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano1C sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndProductId(IAsync& aAsync, Brh& aaProductNumber)
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

void CpProxyLinnCoUkVolkano1C::SyncBoardId(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano1C sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano1C::EndBoardId(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano1C::SyncBoardType(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano1C sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano1C::EndBoardType(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano1C::SyncMaxBoards(TUint& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano1C sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano1C::SyncSoftwareVersion(Brh& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano1C sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano1C::SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano1C sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano1C::SyncDeviceInfo(Brh& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano1C sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1C::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1C::EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml)
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


THandle STDCALL CpProxyLinnCoUkVolkano1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkVolkano1C(aDevice);
}

void STDCALL CpProxyLinnCoUkVolkano1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncReboot(THandle aHandle)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginReboot(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReboot(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndReboot(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncBootMode(THandle aHandle, char** aaMode)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginBootMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootMode(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndBootMode(THandle aHandle, OhNetHandleAsync aAsync, char** aaMode)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncSetBootMode(THandle aHandle, const char* aaMode)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginSetBootMode(THandle aHandle, const char* aaMode, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMode(aaMode);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBootMode(buf_aaMode, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndSetBootMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncBspType(THandle aHandle, char** aaBspType)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginBspType(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBspType(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndBspType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBspType)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncUglyName(THandle aHandle, char** aaUglyName)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginUglyName(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUglyName(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndUglyName(THandle aHandle, OhNetHandleAsync aAsync, char** aaUglyName)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncMacAddress(THandle aHandle, char** aaMacAddress)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginMacAddress(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMacAddress(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndMacAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aaMacAddress)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncProductId(THandle aHandle, char** aaProductNumber)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginProductId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProductId(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndProductId(THandle aHandle, OhNetHandleAsync aAsync, char** aaProductNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncBoardId(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginBoardId(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardId(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndBoardId(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncBoardType(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginBoardType(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardType(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndBoardType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncMaxBoards(THandle aHandle, uint32_t* aaMaxBoards)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginMaxBoards(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMaxBoards(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndMaxBoards(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaMaxBoards)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncSoftwareVersion(THandle aHandle, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginSoftwareVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndSoftwareVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncSoftwareUpdate(THandle aHandle, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginSoftwareUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareUpdate(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndSoftwareUpdate(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano1SyncDeviceInfo(THandle aHandle, char** aaDeviceInfoXml)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano1BeginDeviceInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano1EndDeviceInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aaDeviceInfoXml)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano1C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano1C*>(aHandle);
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

