#include "CpAvOpenhomeOrgPins1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetDeviceMaxAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncGetDeviceMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TUint& aDeviceMax);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    TUint& iDeviceMax;
};

class SyncGetAccountMaxAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncGetAccountMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TUint& aAccountMax);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    TUint& iAccountMax;
};

class SyncGetModesAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncGetModesAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    Brh& iModes;
};

class SyncGetIdArrayAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncGetIdArrayAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aIdArray);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    Brh& iIdArray;
};

class SyncGetCloudConnectedAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncGetCloudConnectedAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TBool& aCloudConnected);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    TBool& iCloudConnected;
};

class SyncReadListAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
    Brh& iList;
};

class SyncInvokeIdAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncInvokeIdAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncInvokeIndexAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncInvokeIndexAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncInvokeUriAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncInvokeUriAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncSetDeviceAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncSetDeviceAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncSetAccountAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncSetAccountAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncClearAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

class SyncSwapAvOpenhomeOrgPins1 : public SyncProxyAction
{
public:
    SyncSwapAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPins1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetDeviceMaxAvOpenhomeOrgPins1

SyncGetDeviceMaxAvOpenhomeOrgPins1::SyncGetDeviceMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TUint& aDeviceMax)
    : iService(aProxy)
    , iDeviceMax(aDeviceMax)
{
}

void SyncGetDeviceMaxAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceMax(aAsync, iDeviceMax);
}

// SyncGetAccountMaxAvOpenhomeOrgPins1

SyncGetAccountMaxAvOpenhomeOrgPins1::SyncGetAccountMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TUint& aAccountMax)
    : iService(aProxy)
    , iAccountMax(aAccountMax)
{
}

void SyncGetAccountMaxAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAccountMax(aAsync, iAccountMax);
}

// SyncGetModesAvOpenhomeOrgPins1

SyncGetModesAvOpenhomeOrgPins1::SyncGetModesAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncGetModesAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetModes(aAsync, iModes);
}

// SyncGetIdArrayAvOpenhomeOrgPins1

SyncGetIdArrayAvOpenhomeOrgPins1::SyncGetIdArrayAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aIdArray)
    : iService(aProxy)
    , iIdArray(aIdArray)
{
}

void SyncGetIdArrayAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIdArray(aAsync, iIdArray);
}

// SyncGetCloudConnectedAvOpenhomeOrgPins1

SyncGetCloudConnectedAvOpenhomeOrgPins1::SyncGetCloudConnectedAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, TBool& aCloudConnected)
    : iService(aProxy)
    , iCloudConnected(aCloudConnected)
{
}

void SyncGetCloudConnectedAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCloudConnected(aAsync, iCloudConnected);
}

// SyncReadListAvOpenhomeOrgPins1

SyncReadListAvOpenhomeOrgPins1::SyncReadListAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncReadListAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iList);
}

// SyncInvokeIdAvOpenhomeOrgPins1

SyncInvokeIdAvOpenhomeOrgPins1::SyncInvokeIdAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIdAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeId(aAsync);
}

// SyncInvokeIndexAvOpenhomeOrgPins1

SyncInvokeIndexAvOpenhomeOrgPins1::SyncInvokeIndexAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIndexAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeIndex(aAsync);
}

// SyncInvokeUriAvOpenhomeOrgPins1

SyncInvokeUriAvOpenhomeOrgPins1::SyncInvokeUriAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeUriAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeUri(aAsync);
}

// SyncSetDeviceAvOpenhomeOrgPins1

SyncSetDeviceAvOpenhomeOrgPins1::SyncSetDeviceAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDevice(aAsync);
}

// SyncSetAccountAvOpenhomeOrgPins1

SyncSetAccountAvOpenhomeOrgPins1::SyncSetAccountAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncSetAccountAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAccount(aAsync);
}

// SyncClearAvOpenhomeOrgPins1

SyncClearAvOpenhomeOrgPins1::SyncClearAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}

// SyncSwapAvOpenhomeOrgPins1

SyncSwapAvOpenhomeOrgPins1::SyncSwapAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1& aProxy)
    : iService(aProxy)
{
}

void SyncSwapAvOpenhomeOrgPins1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSwap(aAsync);
}


// CpProxyAvOpenhomeOrgPins1

CpProxyAvOpenhomeOrgPins1::CpProxyAvOpenhomeOrgPins1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Pins", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetDeviceMax = new Action("GetDeviceMax");
    param = new OpenHome::Net::ParameterUint("DeviceMax");
    iActionGetDeviceMax->AddOutputParameter(param);

    iActionGetAccountMax = new Action("GetAccountMax");
    param = new OpenHome::Net::ParameterUint("AccountMax");
    iActionGetAccountMax->AddOutputParameter(param);

    iActionGetModes = new Action("GetModes");
    param = new OpenHome::Net::ParameterString("Modes");
    iActionGetModes->AddOutputParameter(param);

    iActionGetIdArray = new Action("GetIdArray");
    param = new OpenHome::Net::ParameterString("IdArray");
    iActionGetIdArray->AddOutputParameter(param);

    iActionGetCloudConnected = new Action("GetCloudConnected");
    param = new OpenHome::Net::ParameterBool("CloudConnected");
    iActionGetCloudConnected->AddOutputParameter(param);

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

    iActionInvokeUri = new Action("InvokeUri");
    param = new OpenHome::Net::ParameterString("Mode");
    iActionInvokeUri->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Type");
    iActionInvokeUri->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionInvokeUri->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Shuffle");
    iActionInvokeUri->AddInputParameter(param);

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1::DeviceMaxPropertyChanged);
    iDeviceMax = new PropertyUint("DeviceMax", functor);
    AddProperty(iDeviceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1::AccountMaxPropertyChanged);
    iAccountMax = new PropertyUint("AccountMax", functor);
    AddProperty(iAccountMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1::IdArrayPropertyChanged);
    iIdArray = new PropertyString("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1::CloudConnectedPropertyChanged);
    iCloudConnected = new PropertyBool("CloudConnected", functor);
    AddProperty(iCloudConnected);
}

CpProxyAvOpenhomeOrgPins1::~CpProxyAvOpenhomeOrgPins1()
{
    DestroyService();
    delete iActionGetDeviceMax;
    delete iActionGetAccountMax;
    delete iActionGetModes;
    delete iActionGetIdArray;
    delete iActionGetCloudConnected;
    delete iActionReadList;
    delete iActionInvokeId;
    delete iActionInvokeIndex;
    delete iActionInvokeUri;
    delete iActionSetDevice;
    delete iActionSetAccount;
    delete iActionClear;
    delete iActionSwap;
}

void CpProxyAvOpenhomeOrgPins1::SyncGetDeviceMax(TUint& aDeviceMax)
{
    SyncGetDeviceMaxAvOpenhomeOrgPins1 sync(*this, aDeviceMax);
    BeginGetDeviceMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginGetDeviceMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndGetDeviceMax(IAsync& aAsync, TUint& aDeviceMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDeviceMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDeviceMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPins1::SyncGetAccountMax(TUint& aAccountMax)
{
    SyncGetAccountMaxAvOpenhomeOrgPins1 sync(*this, aAccountMax);
    BeginGetAccountMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginGetAccountMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAccountMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAccountMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndGetAccountMax(IAsync& aAsync, TUint& aAccountMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAccountMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aAccountMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPins1::SyncGetModes(Brh& aModes)
{
    SyncGetModesAvOpenhomeOrgPins1 sync(*this, aModes);
    BeginGetModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginGetModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndGetModes(IAsync& aAsync, Brh& aModes)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aModes);
}

void CpProxyAvOpenhomeOrgPins1::SyncGetIdArray(Brh& aIdArray)
{
    SyncGetIdArrayAvOpenhomeOrgPins1 sync(*this, aIdArray);
    BeginGetIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginGetIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndGetIdArray(IAsync& aAsync, Brh& aIdArray)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aIdArray);
}

void CpProxyAvOpenhomeOrgPins1::SyncGetCloudConnected(TBool& aCloudConnected)
{
    SyncGetCloudConnectedAvOpenhomeOrgPins1 sync(*this, aCloudConnected);
    BeginGetCloudConnected(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginGetCloudConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCloudConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCloudConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndGetCloudConnected(IAsync& aAsync, TBool& aCloudConnected)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCloudConnected"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aCloudConnected = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPins1::SyncReadList(const Brx& aIds, Brh& aList)
{
    SyncReadListAvOpenhomeOrgPins1 sync(*this, aList);
    BeginReadList(aIds, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginReadList(const Brx& aIds, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIds));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndReadList(IAsync& aAsync, Brh& aList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aList);
}

void CpProxyAvOpenhomeOrgPins1::SyncInvokeId(TUint aId)
{
    SyncInvokeIdAvOpenhomeOrgPins1 sync(*this);
    BeginInvokeId(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginInvokeId(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInvokeId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndInvokeId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SyncInvokeIndex(TUint aIndex)
{
    SyncInvokeIndexAvOpenhomeOrgPins1 sync(*this);
    BeginInvokeIndex(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginInvokeIndex(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInvokeIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndInvokeIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SyncInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle)
{
    SyncInvokeUriAvOpenhomeOrgPins1 sync(*this);
    BeginInvokeUri(aMode, aType, aUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInvokeUri, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeUri->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aType));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndInvokeUri(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InvokeUri"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgPins1::SyncSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle)
{
    SyncSetDeviceAvOpenhomeOrgPins1 sync(*this);
    BeginSetDevice(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDevice, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDevice->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aType));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTitle));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDescription));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aArtworkUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndSetDevice(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SyncSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle)
{
    SyncSetAccountAvOpenhomeOrgPins1 sync(*this);
    BeginSetAccount(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAccount, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAccount->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aType));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTitle));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDescription));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aArtworkUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndSetAccount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SyncClear(TUint aId)
{
    SyncClearAvOpenhomeOrgPins1 sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginClear(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndClear(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SyncSwap(TUint aIndex1, TUint aIndex2)
{
    SyncSwapAvOpenhomeOrgPins1 sync(*this);
    BeginSwap(aIndex1, aIndex2, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1::BeginSwap(TUint aIndex1, TUint aIndex2, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSwap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSwap->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex1));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex2));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1::EndSwap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1::SetPropertyDeviceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyAccountMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAccountMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyCloudConnectedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCloudConnectedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPins1::PropertyDeviceMax(TUint& aDeviceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceMax = iDeviceMax->Value();
}

void CpProxyAvOpenhomeOrgPins1::PropertyAccountMax(TUint& aAccountMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAccountMax = iAccountMax->Value();
}

void CpProxyAvOpenhomeOrgPins1::PropertyModes(Brhz& aModes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModes.Set(iModes->Value());
}

void CpProxyAvOpenhomeOrgPins1::PropertyIdArray(Brhz& aIdArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgPins1::PropertyCloudConnected(TBool& aCloudConnected) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCloudConnected = iCloudConnected->Value();
}

void CpProxyAvOpenhomeOrgPins1::DeviceMaxPropertyChanged()
{
    ReportEvent(iDeviceMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1::AccountMaxPropertyChanged()
{
    ReportEvent(iAccountMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgPins1::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgPins1::CloudConnectedPropertyChanged()
{
    ReportEvent(iCloudConnectedChanged);
}


void CpProxyAvOpenhomeOrgPins1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgPins1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgPins1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgPins1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgPins1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgPins1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgPins1::Version() const
{
  return iCpProxy.Version();
}


