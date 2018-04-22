#include "CpAvOpenhomeOrgPins1.h"
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


class SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, uint32_t& aDeviceMax, uint32_t& aAccountMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
    uint32_t& iDeviceMax;
    uint32_t& iAccountMax;
};

SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp::SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, uint32_t& aDeviceMax, uint32_t& aAccountMax)
    : iService(aProxy)
    , iDeviceMax(aDeviceMax)
    , iAccountMax(aAccountMax)
{
}

void SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceAccountMax(aAsync, iDeviceMax, iAccountMax);
}


class SyncGetModesAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncGetModesAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetModesAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
    std::string& iModes;
};

SyncGetModesAvOpenhomeOrgPins1Cpp::SyncGetModesAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncGetModesAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetModes(aAsync, iModes);
}


class SyncGetIdArrayAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncGetIdArrayAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aIdArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIdArrayAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
    std::string& iIdArray;
};

SyncGetIdArrayAvOpenhomeOrgPins1Cpp::SyncGetIdArrayAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aIdArray)
    : iService(aProxy)
    , iIdArray(aIdArray)
{
}

void SyncGetIdArrayAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIdArray(aAsync, iIdArray);
}


class SyncReadListAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
    std::string& iList;
};

SyncReadListAvOpenhomeOrgPins1Cpp::SyncReadListAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncReadListAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iList);
}


class SyncInvokeIdAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncInvokeIdAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInvokeIdAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncInvokeIdAvOpenhomeOrgPins1Cpp::SyncInvokeIdAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIdAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeId(aAsync);
}


class SyncInvokeIndexAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncInvokeIndexAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInvokeIndexAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncInvokeIndexAvOpenhomeOrgPins1Cpp::SyncInvokeIndexAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIndexAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeIndex(aAsync);
}


class SyncSetDeviceAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncSetDeviceAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDeviceAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncSetDeviceAvOpenhomeOrgPins1Cpp::SyncSetDeviceAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDevice(aAsync);
}


class SyncSetAccountAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncSetAccountAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAccountAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncSetAccountAvOpenhomeOrgPins1Cpp::SyncSetAccountAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAccountAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAccount(aAsync);
}


class SyncClearAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncClearAvOpenhomeOrgPins1Cpp::SyncClearAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}


class SyncSwapAvOpenhomeOrgPins1Cpp : public SyncProxyAction
{
public:
    SyncSwapAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSwapAvOpenhomeOrgPins1Cpp() {}
private:
    CpProxyAvOpenhomeOrgPins1Cpp& iService;
};

SyncSwapAvOpenhomeOrgPins1Cpp::SyncSwapAvOpenhomeOrgPins1Cpp(CpProxyAvOpenhomeOrgPins1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSwapAvOpenhomeOrgPins1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSwap(aAsync);
}


CpProxyAvOpenhomeOrgPins1Cpp::CpProxyAvOpenhomeOrgPins1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Pins", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetDeviceAccountMax = new Action("GetDeviceAccountMax");
    param = new OpenHome::Net::ParameterUint("DeviceMax");
    iActionGetDeviceAccountMax->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("AccountMax");
    iActionGetDeviceAccountMax->AddOutputParameter(param);

    iActionGetModes = new Action("GetModes");
    param = new OpenHome::Net::ParameterString("Modes");
    iActionGetModes->AddOutputParameter(param);

    iActionGetIdArray = new Action("GetIdArray");
    param = new OpenHome::Net::ParameterString("IdArray");
    iActionGetIdArray->AddOutputParameter(param);

    iActionReadList = new Action("ReadList");
    param = new OpenHome::Net::ParameterString("Ids");
    iActionReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("List");
    iActionReadList->AddOutputParameter(param);

    iActionInvokeId = new Action("InvokeId");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionInvokeId->AddInputParameter(param);

    iActionInvokeIndex = new Action("InvokeIndex");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionInvokeIndex->AddInputParameter(param);

    iActionSetDevice = new Action("SetDevice");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Mode");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Type");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Title");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Description");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ArtworkUri");
    iActionSetDevice->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Shuffle");
    iActionSetDevice->AddInputParameter(param);

    iActionSetAccount = new Action("SetAccount");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Mode");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Type");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Title");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Description");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ArtworkUri");
    iActionSetAccount->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Shuffle");
    iActionSetAccount->AddInputParameter(param);

    iActionClear = new Action("Clear");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionClear->AddInputParameter(param);

    iActionSwap = new Action("Swap");
    param = new OpenHome::Net::ParameterUint("Index1");
    iActionSwap->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Index2");
    iActionSwap->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1Cpp::DeviceMaxPropertyChanged);
    iDeviceMax = new PropertyUint("DeviceMax", functor);
    AddProperty(iDeviceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1Cpp::AccountMaxPropertyChanged);
    iAccountMax = new PropertyUint("AccountMax", functor);
    AddProperty(iAccountMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1Cpp::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1Cpp::IdArrayPropertyChanged);
    iIdArray = new PropertyString("IdArray", functor);
    AddProperty(iIdArray);
}

CpProxyAvOpenhomeOrgPins1Cpp::~CpProxyAvOpenhomeOrgPins1Cpp()
{
    DestroyService();
    delete iActionGetDeviceAccountMax;
    delete iActionGetModes;
    delete iActionGetIdArray;
    delete iActionReadList;
    delete iActionInvokeId;
    delete iActionInvokeIndex;
    delete iActionSetDevice;
    delete iActionSetAccount;
    delete iActionClear;
    delete iActionSwap;
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncGetDeviceAccountMax(uint32_t& aDeviceMax, uint32_t& aAccountMax)
{
    SyncGetDeviceAccountMaxAvOpenhomeOrgPins1Cpp sync(*this, aDeviceMax, aAccountMax);
    BeginGetDeviceAccountMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginGetDeviceAccountMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceAccountMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceAccountMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndGetDeviceAccountMax(IAsync& aAsync, uint32_t& aDeviceMax, uint32_t& aAccountMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDeviceAccountMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDeviceMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aAccountMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncGetModes(std::string& aModes)
{
    SyncGetModesAvOpenhomeOrgPins1Cpp sync(*this, aModes);
    BeginGetModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginGetModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndGetModes(IAsync& aAsync, std::string& aModes)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetModes"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aModes.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncGetIdArray(std::string& aIdArray)
{
    SyncGetIdArrayAvOpenhomeOrgPins1Cpp sync(*this, aIdArray);
    BeginGetIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginGetIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndGetIdArray(IAsync& aAsync, std::string& aIdArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetIdArray"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aIdArray.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncReadList(const std::string& aIds, std::string& aList)
{
    SyncReadListAvOpenhomeOrgPins1Cpp sync(*this, aList);
    BeginReadList(aIds, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginReadList(const std::string& aIds, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    {
        Brn buf((const TByte*)aIds.c_str(), (TUint)aIds.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndReadList(IAsync& aAsync, std::string& aList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncInvokeId(uint32_t aId)
{
    SyncInvokeIdAvOpenhomeOrgPins1Cpp sync(*this);
    BeginInvokeId(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginInvokeId(uint32_t aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInvokeId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndInvokeId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InvokeId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncInvokeIndex(uint32_t aIndex)
{
    SyncInvokeIndexAvOpenhomeOrgPins1Cpp sync(*this);
    BeginInvokeIndex(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginInvokeIndex(uint32_t aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInvokeIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndInvokeIndex(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InvokeIndex"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle)
{
    SyncSetDeviceAvOpenhomeOrgPins1Cpp sync(*this);
    BeginSetDevice(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDevice, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDevice->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    {
        Brn buf((const TByte*)aMode.c_str(), (TUint)aMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aType.c_str(), (TUint)aType.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTitle.c_str(), (TUint)aTitle.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aDescription.c_str(), (TUint)aDescription.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aArtworkUri.c_str(), (TUint)aArtworkUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndSetDevice(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDevice"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle)
{
    SyncSetAccountAvOpenhomeOrgPins1Cpp sync(*this);
    BeginSetAccount(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAccount, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAccount->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    {
        Brn buf((const TByte*)aMode.c_str(), (TUint)aMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aType.c_str(), (TUint)aType.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTitle.c_str(), (TUint)aTitle.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aDescription.c_str(), (TUint)aDescription.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aArtworkUri.c_str(), (TUint)aArtworkUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndSetAccount(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAccount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncClear(uint32_t aId)
{
    SyncClearAvOpenhomeOrgPins1Cpp sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginClear(uint32_t aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndClear(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Clear"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SyncSwap(uint32_t aIndex1, uint32_t aIndex2)
{
    SyncSwapAvOpenhomeOrgPins1Cpp sync(*this);
    BeginSwap(aIndex1, aIndex2, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1Cpp::BeginSwap(uint32_t aIndex1, uint32_t aIndex2, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSwap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSwap->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex1));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex2));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1Cpp::EndSwap(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Swap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyDeviceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyAccountMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAccountMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1Cpp::PropertyDeviceMax(uint32_t& aDeviceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceMax = iDeviceMax->Value();
}

void CpProxyAvOpenhomeOrgPins1Cpp::PropertyAccountMax(uint32_t& aAccountMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAccountMax = iAccountMax->Value();
}

void CpProxyAvOpenhomeOrgPins1Cpp::PropertyModes(std::string& aModes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModes->Value();
    aModes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgPins1Cpp::PropertyIdArray(std::string& aIdArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIdArray->Value();
    aIdArray.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgPins1Cpp::DeviceMaxPropertyChanged()
{
    ReportEvent(iDeviceMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1Cpp::AccountMaxPropertyChanged()
{
    ReportEvent(iAccountMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1Cpp::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgPins1Cpp::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgPins1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgPins1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgPins1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgPins1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgPins1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgPins1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgPins1Cpp::Version() const
{
  return iCpProxy.Version();
}

