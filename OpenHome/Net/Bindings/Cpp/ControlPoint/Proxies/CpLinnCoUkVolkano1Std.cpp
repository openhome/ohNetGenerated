#include "CpLinnCoUkVolkano1.h"
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


class SyncRebootLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
};

SyncRebootLinnCoUkVolkano1Cpp::SyncRebootLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaMode;
};

SyncBootModeLinnCoUkVolkano1Cpp::SyncBootModeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
};

SyncSetBootModeLinnCoUkVolkano1Cpp::SyncSetBootModeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaBspType;
};

SyncBspTypeLinnCoUkVolkano1Cpp::SyncBspTypeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano1Cpp::SyncUglyNameLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncMacAddressLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano1Cpp::SyncMacAddressLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncProductIdLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano1Cpp::SyncProductIdLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano1Cpp::SyncBoardIdLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano1Cpp::SyncBoardTypeLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, uint32_t& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    uint32_t& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano1Cpp::SyncMaxBoardsLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, uint32_t& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano1Cpp::SyncSoftwareVersionLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    bool& iaAvailable;
    std::string& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano1Cpp::SyncSoftwareUpdateLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano1Cpp : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano1Cpp() {}
private:
    CpProxyLinnCoUkVolkano1Cpp& iService;
    std::string& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano1Cpp::SyncDeviceInfoLinnCoUkVolkano1Cpp(CpProxyLinnCoUkVolkano1Cpp& aProxy, std::string& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}


CpProxyLinnCoUkVolkano1Cpp::CpProxyLinnCoUkVolkano1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("linn-co-uk", "Volkano", 1, aDevice.Device())
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

CpProxyLinnCoUkVolkano1Cpp::~CpProxyLinnCoUkVolkano1Cpp()
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

void CpProxyLinnCoUkVolkano1Cpp::SyncReboot()
{
    SyncRebootLinnCoUkVolkano1Cpp sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionReboot, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncBootMode(std::string& aaMode)
{
    SyncBootModeLinnCoUkVolkano1Cpp sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndBootMode(IAsync& aAsync, std::string& aaMode)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncSetBootMode(const std::string& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano1Cpp sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginSetBootMode(const std::string& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    {
        Brn buf((const TByte*)aaMode.c_str(), (TUint)aaMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncBspType(std::string& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano1Cpp sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndBspType(IAsync& aAsync, std::string& aaBspType)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncUglyName(std::string& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano1Cpp sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndUglyName(IAsync& aAsync, std::string& aaUglyName)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncMacAddress(std::string& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano1Cpp sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndMacAddress(IAsync& aAsync, std::string& aaMacAddress)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncProductId(std::string& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano1Cpp sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndProductId(IAsync& aAsync, std::string& aaProductNumber)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncBoardId(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano1Cpp sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginBoardId(uint32_t aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionBoardId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndBoardId(IAsync& aAsync, std::string& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncBoardType(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano1Cpp sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginBoardType(uint32_t aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionBoardType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardType->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndBoardType(IAsync& aAsync, std::string& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncMaxBoards(uint32_t& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano1Cpp sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndMaxBoards(IAsync& aAsync, uint32_t& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncSoftwareVersion(std::string& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano1Cpp sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndSoftwareVersion(IAsync& aAsync, std::string& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncSoftwareUpdate(bool& aaAvailable, std::string& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano1Cpp sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndSoftwareUpdate(IAsync& aAsync, bool& aaAvailable, std::string& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano1Cpp::SyncDeviceInfo(std::string& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano1Cpp sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano1Cpp::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano1Cpp::EndDeviceInfo(IAsync& aAsync, std::string& aaDeviceInfoXml)
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

