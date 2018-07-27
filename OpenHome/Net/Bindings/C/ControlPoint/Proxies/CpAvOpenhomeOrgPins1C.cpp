#include "CpAvOpenhomeOrgPins1.h"
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

class CpProxyAvOpenhomeOrgPins1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgPins1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgPins1C();
    //CpProxyAvOpenhomeOrgPins1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgPins1*>(iProxy); }

    void SyncGetDeviceMax(TUint& aDeviceMax);
    void BeginGetDeviceMax(FunctorAsync& aFunctor);
    void EndGetDeviceMax(IAsync& aAsync, TUint& aDeviceMax);

    void SyncGetAccountMax(TUint& aAccountMax);
    void BeginGetAccountMax(FunctorAsync& aFunctor);
    void EndGetAccountMax(IAsync& aAsync, TUint& aAccountMax);

    void SyncGetModes(Brh& aModes);
    void BeginGetModes(FunctorAsync& aFunctor);
    void EndGetModes(IAsync& aAsync, Brh& aModes);

    void SyncGetIdArray(Brh& aIdArray);
    void BeginGetIdArray(FunctorAsync& aFunctor);
    void EndGetIdArray(IAsync& aAsync, Brh& aIdArray);

    void SyncGetCloudConnected(TBool& aCloudConnected);
    void BeginGetCloudConnected(FunctorAsync& aFunctor);
    void EndGetCloudConnected(IAsync& aAsync, TBool& aCloudConnected);

    void SyncReadList(const Brx& aIds, Brh& aList);
    void BeginReadList(const Brx& aIds, FunctorAsync& aFunctor);
    void EndReadList(IAsync& aAsync, Brh& aList);

    void SyncInvokeId(TUint aId);
    void BeginInvokeId(TUint aId, FunctorAsync& aFunctor);
    void EndInvokeId(IAsync& aAsync);

    void SyncInvokeIndex(TUint aIndex);
    void BeginInvokeIndex(TUint aIndex, FunctorAsync& aFunctor);
    void EndInvokeIndex(IAsync& aAsync);

    void SyncInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle);
    void BeginInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle, FunctorAsync& aFunctor);
    void EndInvokeUri(IAsync& aAsync);

    void SyncSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle);
    void BeginSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor);
    void EndSetDevice(IAsync& aAsync);

    void SyncSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle);
    void BeginSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor);
    void EndSetAccount(IAsync& aAsync);

    void SyncClear(TUint aId);
    void BeginClear(TUint aId, FunctorAsync& aFunctor);
    void EndClear(IAsync& aAsync);

    void SyncSwap(TUint aIndex1, TUint aIndex2);
    void BeginSwap(TUint aIndex1, TUint aIndex2, FunctorAsync& aFunctor);
    void EndSwap(IAsync& aAsync);

    void SetPropertyDeviceMaxChanged(Functor& aFunctor);
    void SetPropertyAccountMaxChanged(Functor& aFunctor);
    void SetPropertyModesChanged(Functor& aFunctor);
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    void SetPropertyCloudConnectedChanged(Functor& aFunctor);

    void PropertyDeviceMax(TUint& aDeviceMax) const;
    void PropertyAccountMax(TUint& aAccountMax) const;
    void PropertyModes(Brhz& aModes) const;
    void PropertyIdArray(Brhz& aIdArray) const;
    void PropertyCloudConnected(TBool& aCloudConnected) const;
private:
    void DeviceMaxPropertyChanged();
    void AccountMaxPropertyChanged();
    void ModesPropertyChanged();
    void IdArrayPropertyChanged();
    void CloudConnectedPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetDeviceMax;
    Action* iActionGetAccountMax;
    Action* iActionGetModes;
    Action* iActionGetIdArray;
    Action* iActionGetCloudConnected;
    Action* iActionReadList;
    Action* iActionInvokeId;
    Action* iActionInvokeIndex;
    Action* iActionInvokeUri;
    Action* iActionSetDevice;
    Action* iActionSetAccount;
    Action* iActionClear;
    Action* iActionSwap;
    PropertyUint* iDeviceMax;
    PropertyUint* iAccountMax;
    PropertyString* iModes;
    PropertyString* iIdArray;
    PropertyBool* iCloudConnected;
    Functor iDeviceMaxChanged;
    Functor iAccountMaxChanged;
    Functor iModesChanged;
    Functor iIdArrayChanged;
    Functor iCloudConnectedChanged;
};


class SyncGetDeviceMaxAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncGetDeviceMaxAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TUint& aDeviceMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceMaxAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    TUint& iDeviceMax;
};

SyncGetDeviceMaxAvOpenhomeOrgPins1C::SyncGetDeviceMaxAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TUint& aDeviceMax)
    : iService(aProxy)
    , iDeviceMax(aDeviceMax)
{
}

void SyncGetDeviceMaxAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceMax(aAsync, iDeviceMax);
}


class SyncGetAccountMaxAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncGetAccountMaxAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TUint& aAccountMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAccountMaxAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    TUint& iAccountMax;
};

SyncGetAccountMaxAvOpenhomeOrgPins1C::SyncGetAccountMaxAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TUint& aAccountMax)
    : iService(aProxy)
    , iAccountMax(aAccountMax)
{
}

void SyncGetAccountMaxAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAccountMax(aAsync, iAccountMax);
}


class SyncGetModesAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncGetModesAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetModesAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    Brh& iModes;
};

SyncGetModesAvOpenhomeOrgPins1C::SyncGetModesAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncGetModesAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetModes(aAsync, iModes);
}


class SyncGetIdArrayAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncGetIdArrayAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aIdArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIdArrayAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    Brh& iIdArray;
};

SyncGetIdArrayAvOpenhomeOrgPins1C::SyncGetIdArrayAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aIdArray)
    : iService(aProxy)
    , iIdArray(aIdArray)
{
}

void SyncGetIdArrayAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIdArray(aAsync, iIdArray);
}


class SyncGetCloudConnectedAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncGetCloudConnectedAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TBool& aCloudConnected);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCloudConnectedAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    TBool& iCloudConnected;
};

SyncGetCloudConnectedAvOpenhomeOrgPins1C::SyncGetCloudConnectedAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, TBool& aCloudConnected)
    : iService(aProxy)
    , iCloudConnected(aCloudConnected)
{
}

void SyncGetCloudConnectedAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCloudConnected(aAsync, iCloudConnected);
}


class SyncReadListAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
    Brh& iList;
};

SyncReadListAvOpenhomeOrgPins1C::SyncReadListAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncReadListAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iList);
}


class SyncInvokeIdAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncInvokeIdAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInvokeIdAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncInvokeIdAvOpenhomeOrgPins1C::SyncInvokeIdAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIdAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeId(aAsync);
}


class SyncInvokeIndexAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncInvokeIndexAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInvokeIndexAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncInvokeIndexAvOpenhomeOrgPins1C::SyncInvokeIndexAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeIndexAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeIndex(aAsync);
}


class SyncInvokeUriAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncInvokeUriAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInvokeUriAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncInvokeUriAvOpenhomeOrgPins1C::SyncInvokeUriAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncInvokeUriAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInvokeUri(aAsync);
}


class SyncSetDeviceAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncSetDeviceAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDeviceAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncSetDeviceAvOpenhomeOrgPins1C::SyncSetDeviceAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDevice(aAsync);
}


class SyncSetAccountAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncSetAccountAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAccountAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncSetAccountAvOpenhomeOrgPins1C::SyncSetAccountAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAccountAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAccount(aAsync);
}


class SyncClearAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncClearAvOpenhomeOrgPins1C::SyncClearAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}


class SyncSwapAvOpenhomeOrgPins1C : public SyncProxyAction
{
public:
    SyncSwapAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSwapAvOpenhomeOrgPins1C() {};
private:
    CpProxyAvOpenhomeOrgPins1C& iService;
};

SyncSwapAvOpenhomeOrgPins1C::SyncSwapAvOpenhomeOrgPins1C(CpProxyAvOpenhomeOrgPins1C& aProxy)
    : iService(aProxy)
{
}

void SyncSwapAvOpenhomeOrgPins1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSwap(aAsync);
}

CpProxyAvOpenhomeOrgPins1C::CpProxyAvOpenhomeOrgPins1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Pins", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1C::DeviceMaxPropertyChanged);
    iDeviceMax = new PropertyUint("DeviceMax", functor);
    AddProperty(iDeviceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1C::AccountMaxPropertyChanged);
    iAccountMax = new PropertyUint("AccountMax", functor);
    AddProperty(iAccountMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1C::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1C::IdArrayPropertyChanged);
    iIdArray = new PropertyString("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPins1C::CloudConnectedPropertyChanged);
    iCloudConnected = new PropertyBool("CloudConnected", functor);
    AddProperty(iCloudConnected);
}

CpProxyAvOpenhomeOrgPins1C::~CpProxyAvOpenhomeOrgPins1C()
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

void CpProxyAvOpenhomeOrgPins1C::SyncGetDeviceMax(TUint& aDeviceMax)
{
    SyncGetDeviceMaxAvOpenhomeOrgPins1C sync(*this, aDeviceMax);
    BeginGetDeviceMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginGetDeviceMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDeviceMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndGetDeviceMax(IAsync& aAsync, TUint& aDeviceMax)
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

void CpProxyAvOpenhomeOrgPins1C::SyncGetAccountMax(TUint& aAccountMax)
{
    SyncGetAccountMaxAvOpenhomeOrgPins1C sync(*this, aAccountMax);
    BeginGetAccountMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginGetAccountMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAccountMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAccountMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndGetAccountMax(IAsync& aAsync, TUint& aAccountMax)
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

void CpProxyAvOpenhomeOrgPins1C::SyncGetModes(Brh& aModes)
{
    SyncGetModesAvOpenhomeOrgPins1C sync(*this, aModes);
    BeginGetModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginGetModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndGetModes(IAsync& aAsync, Brh& aModes)
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

void CpProxyAvOpenhomeOrgPins1C::SyncGetIdArray(Brh& aIdArray)
{
    SyncGetIdArrayAvOpenhomeOrgPins1C sync(*this, aIdArray);
    BeginGetIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginGetIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndGetIdArray(IAsync& aAsync, Brh& aIdArray)
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

void CpProxyAvOpenhomeOrgPins1C::SyncGetCloudConnected(TBool& aCloudConnected)
{
    SyncGetCloudConnectedAvOpenhomeOrgPins1C sync(*this, aCloudConnected);
    BeginGetCloudConnected(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginGetCloudConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetCloudConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCloudConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndGetCloudConnected(IAsync& aAsync, TBool& aCloudConnected)
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

void CpProxyAvOpenhomeOrgPins1C::SyncReadList(const Brx& aIds, Brh& aList)
{
    SyncReadListAvOpenhomeOrgPins1C sync(*this, aList);
    BeginReadList(aIds, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginReadList(const Brx& aIds, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIds));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndReadList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgPins1C::SyncInvokeId(TUint aId)
{
    SyncInvokeIdAvOpenhomeOrgPins1C sync(*this);
    BeginInvokeId(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginInvokeId(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInvokeId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndInvokeId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncInvokeIndex(TUint aIndex)
{
    SyncInvokeIndexAvOpenhomeOrgPins1C sync(*this);
    BeginInvokeIndex(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginInvokeIndex(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInvokeIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndInvokeIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle)
{
    SyncInvokeUriAvOpenhomeOrgPins1C sync(*this);
    BeginInvokeUri(aMode, aType, aUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginInvokeUri(const Brx& aMode, const Brx& aType, const Brx& aUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInvokeUri, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInvokeUri->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aType));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndInvokeUri(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle)
{
    SyncSetDeviceAvOpenhomeOrgPins1C sync(*this);
    BeginSetDevice(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginSetDevice(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDevice, aFunctor);
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
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndSetDevice(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle)
{
    SyncSetAccountAvOpenhomeOrgPins1C sync(*this);
    BeginSetAccount(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginSetAccount(TUint aIndex, const Brx& aMode, const Brx& aType, const Brx& aUri, const Brx& aTitle, const Brx& aDescription, const Brx& aArtworkUri, TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAccount, aFunctor);
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
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndSetAccount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncClear(TUint aId)
{
    SyncClearAvOpenhomeOrgPins1C sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginClear(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndClear(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SyncSwap(TUint aIndex1, TUint aIndex2)
{
    SyncSwapAvOpenhomeOrgPins1C sync(*this);
    BeginSwap(aIndex1, aIndex2, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPins1C::BeginSwap(TUint aIndex1, TUint aIndex2, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSwap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSwap->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex1));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex2));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPins1C::EndSwap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPins1C::SetPropertyDeviceMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgPins1C::SetPropertyAccountMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAccountMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgPins1C::SetPropertyModesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgPins1C::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdArrayChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgPins1C::SetPropertyCloudConnectedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCloudConnectedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgPins1C::PropertyDeviceMax(TUint& aDeviceMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceMax = iDeviceMax->Value();
}

void CpProxyAvOpenhomeOrgPins1C::PropertyAccountMax(TUint& aAccountMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAccountMax = iAccountMax->Value();
}

void CpProxyAvOpenhomeOrgPins1C::PropertyModes(Brhz& aModes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModes.Set(iModes->Value());
}

void CpProxyAvOpenhomeOrgPins1C::PropertyIdArray(Brhz& aIdArray) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgPins1C::PropertyCloudConnected(TBool& aCloudConnected) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCloudConnected = iCloudConnected->Value();
}

void CpProxyAvOpenhomeOrgPins1C::DeviceMaxPropertyChanged()
{
    ReportEvent(iDeviceMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1C::AccountMaxPropertyChanged()
{
    ReportEvent(iAccountMaxChanged);
}

void CpProxyAvOpenhomeOrgPins1C::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgPins1C::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgPins1C::CloudConnectedPropertyChanged()
{
    ReportEvent(iCloudConnectedChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgPins1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgPins1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgPins1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncGetDeviceMax(THandle aHandle, uint32_t* aDeviceMax)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetDeviceMax(*aDeviceMax);
    }
    catch (ProxyError& ) {
        err = -1;
        *aDeviceMax = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginGetDeviceMax(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceMax(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndGetDeviceMax(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aDeviceMax)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetDeviceMax(*async, *aDeviceMax);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncGetAccountMax(THandle aHandle, uint32_t* aAccountMax)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetAccountMax(*aAccountMax);
    }
    catch (ProxyError& ) {
        err = -1;
        *aAccountMax = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginGetAccountMax(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAccountMax(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndGetAccountMax(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aAccountMax)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetAccountMax(*async, *aAccountMax);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncGetModes(THandle aHandle, char** aModes)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aModes;
    int32_t err = 0;
    try {
        proxyC->SyncGetModes(buf_aModes);
        *aModes = buf_aModes.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aModes = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginGetModes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetModes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndGetModes(THandle aHandle, OhNetHandleAsync aAsync, char** aModes)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aModes;
    *aModes = NULL;
    try {
        proxyC->EndGetModes(*async, buf_aModes);
        *aModes = buf_aModes.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncGetIdArray(THandle aHandle, char** aIdArray)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdArray;
    int32_t err = 0;
    try {
        proxyC->SyncGetIdArray(buf_aIdArray);
        *aIdArray = buf_aIdArray.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aIdArray = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginGetIdArray(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIdArray(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndGetIdArray(THandle aHandle, OhNetHandleAsync aAsync, char** aIdArray)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aIdArray;
    *aIdArray = NULL;
    try {
        proxyC->EndGetIdArray(*async, buf_aIdArray);
        *aIdArray = buf_aIdArray.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncGetCloudConnected(THandle aHandle, uint32_t* aCloudConnected)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool CloudConnected;
    int32_t err = 0;
    try {
        proxyC->SyncGetCloudConnected(CloudConnected);
        *aCloudConnected = CloudConnected? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aCloudConnected = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginGetCloudConnected(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetCloudConnected(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndGetCloudConnected(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aCloudConnected)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool CloudConnected;
    try {
        proxyC->EndGetCloudConnected(*async, CloudConnected);
        *aCloudConnected = CloudConnected? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncReadList(THandle aHandle, const char* aIds, char** aList)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIds(aIds);
    Brh buf_aList;
    int32_t err = 0;
    try {
        proxyC->SyncReadList(buf_aIds, buf_aList);
        *aList = buf_aList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginReadList(THandle aHandle, const char* aIds, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIds(aIds);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReadList(buf_aIds, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndReadList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aList;
    *aList = NULL;
    try {
        proxyC->EndReadList(*async, buf_aList);
        *aList = buf_aList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncInvokeId(THandle aHandle, uint32_t aId)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncInvokeId(aId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginInvokeId(THandle aHandle, uint32_t aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInvokeId(aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndInvokeId(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInvokeId(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncInvokeIndex(THandle aHandle, uint32_t aIndex)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncInvokeIndex(aIndex);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginInvokeIndex(THandle aHandle, uint32_t aIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInvokeIndex(aIndex, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndInvokeIndex(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInvokeIndex(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncInvokeUri(THandle aHandle, const char* aMode, const char* aType, const char* aUri, uint32_t aShuffle)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    int32_t err = 0;
    try {
        proxyC->SyncInvokeUri(buf_aMode, buf_aType, buf_aUri, (aShuffle==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginInvokeUri(THandle aHandle, const char* aMode, const char* aType, const char* aUri, uint32_t aShuffle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInvokeUri(buf_aMode, buf_aType, buf_aUri, (aShuffle==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndInvokeUri(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInvokeUri(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncSetDevice(THandle aHandle, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    Brh buf_aTitle(aTitle);
    Brh buf_aDescription(aDescription);
    Brh buf_aArtworkUri(aArtworkUri);
    int32_t err = 0;
    try {
        proxyC->SyncSetDevice(aIndex, buf_aMode, buf_aType, buf_aUri, buf_aTitle, buf_aDescription, buf_aArtworkUri, (aShuffle==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginSetDevice(THandle aHandle, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    Brh buf_aTitle(aTitle);
    Brh buf_aDescription(aDescription);
    Brh buf_aArtworkUri(aArtworkUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDevice(aIndex, buf_aMode, buf_aType, buf_aUri, buf_aTitle, buf_aDescription, buf_aArtworkUri, (aShuffle==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndSetDevice(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDevice(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncSetAccount(THandle aHandle, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    Brh buf_aTitle(aTitle);
    Brh buf_aDescription(aDescription);
    Brh buf_aArtworkUri(aArtworkUri);
    int32_t err = 0;
    try {
        proxyC->SyncSetAccount(aIndex, buf_aMode, buf_aType, buf_aUri, buf_aTitle, buf_aDescription, buf_aArtworkUri, (aShuffle==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginSetAccount(THandle aHandle, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aType(aType);
    Brh buf_aUri(aUri);
    Brh buf_aTitle(aTitle);
    Brh buf_aDescription(aDescription);
    Brh buf_aArtworkUri(aArtworkUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAccount(aIndex, buf_aMode, buf_aType, buf_aUri, buf_aTitle, buf_aDescription, buf_aArtworkUri, (aShuffle==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndSetAccount(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetAccount(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncClear(THandle aHandle, uint32_t aId)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncClear(aId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginClear(THandle aHandle, uint32_t aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClear(aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndClear(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClear(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1SyncSwap(THandle aHandle, uint32_t aIndex1, uint32_t aIndex2)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSwap(aIndex1, aIndex2);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1BeginSwap(THandle aHandle, uint32_t aIndex1, uint32_t aIndex2, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSwap(aIndex1, aIndex2, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1EndSwap(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSwap(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgPins1SetPropertyDeviceMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgPins1SetPropertyAccountMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAccountMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgPins1SetPropertyModesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModesChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgPins1SetPropertyIdArrayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdArrayChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgPins1SetPropertyCloudConnectedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCloudConnectedChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1PropertyDeviceMax(THandle aHandle, uint32_t* aDeviceMax)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyDeviceMax(*aDeviceMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1PropertyAccountMax(THandle aHandle, uint32_t* aAccountMax)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyAccountMax(*aAccountMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1PropertyModes(THandle aHandle, char** aModes)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModes;
    try {
        proxyC->PropertyModes(buf_aModes);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModes = buf_aModes.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1PropertyIdArray(THandle aHandle, char** aIdArray)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aIdArray;
    try {
        proxyC->PropertyIdArray(buf_aIdArray);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aIdArray = buf_aIdArray.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgPins1PropertyCloudConnected(THandle aHandle, uint32_t* aCloudConnected)
{
    CpProxyAvOpenhomeOrgPins1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgPins1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool CloudConnected;
    try {
        proxyC->PropertyCloudConnected(CloudConnected);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aCloudConnected = CloudConnected? 1 : 0;
    return 0;
}

