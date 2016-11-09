#include "CpAvOpenhomeOrgCredentials1.h"
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

class CpProxyAvOpenhomeOrgCredentials1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgCredentials1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgCredentials1C();
    //CpProxyAvOpenhomeOrgCredentials1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgCredentials1*>(iProxy); }

    void SyncSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword);
    void BeginSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword, FunctorAsync& aFunctor);
    void EndSet(IAsync& aAsync);

    void SyncClear(const Brx& aId);
    void BeginClear(const Brx& aId, FunctorAsync& aFunctor);
    void EndClear(IAsync& aAsync);

    void SyncSetEnabled(const Brx& aId, TBool aEnabled);
    void BeginSetEnabled(const Brx& aId, TBool aEnabled, FunctorAsync& aFunctor);
    void EndSetEnabled(IAsync& aAsync);

    void SyncGet(const Brx& aId, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData);
    void BeginGet(const Brx& aId, FunctorAsync& aFunctor);
    void EndGet(IAsync& aAsync, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData);

    void SyncLogin(const Brx& aId, Brh& aToken);
    void BeginLogin(const Brx& aId, FunctorAsync& aFunctor);
    void EndLogin(IAsync& aAsync, Brh& aToken);

    void SyncReLogin(const Brx& aId, const Brx& aCurrentToken, Brh& aNewToken);
    void BeginReLogin(const Brx& aId, const Brx& aCurrentToken, FunctorAsync& aFunctor);
    void EndReLogin(IAsync& aAsync, Brh& aNewToken);

    void SyncGetIds(Brh& aIds);
    void BeginGetIds(FunctorAsync& aFunctor);
    void EndGetIds(IAsync& aAsync, Brh& aIds);

    void SyncGetPublicKey(Brh& aPublicKey);
    void BeginGetPublicKey(FunctorAsync& aFunctor);
    void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey);

    void SyncGetSequenceNumber(TUint& aSequenceNumber);
    void BeginGetSequenceNumber(FunctorAsync& aFunctor);
    void EndGetSequenceNumber(IAsync& aAsync, TUint& aSequenceNumber);

    void SetPropertyIdsChanged(Functor& aFunctor);
    void SetPropertyPublicKeyChanged(Functor& aFunctor);
    void SetPropertySequenceNumberChanged(Functor& aFunctor);

    void PropertyIds(Brhz& aIds) const;
    void PropertyPublicKey(Brhz& aPublicKey) const;
    void PropertySequenceNumber(TUint& aSequenceNumber) const;
private:
    void IdsPropertyChanged();
    void PublicKeyPropertyChanged();
    void SequenceNumberPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSet;
    Action* iActionClear;
    Action* iActionSetEnabled;
    Action* iActionGet;
    Action* iActionLogin;
    Action* iActionReLogin;
    Action* iActionGetIds;
    Action* iActionGetPublicKey;
    Action* iActionGetSequenceNumber;
    PropertyString* iIds;
    PropertyString* iPublicKey;
    PropertyUint* iSequenceNumber;
    Functor iIdsChanged;
    Functor iPublicKeyChanged;
    Functor iSequenceNumberChanged;
};


class SyncSetAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
};

SyncSetAvOpenhomeOrgCredentials1C::SyncSetAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncClearAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
};

SyncClearAvOpenhomeOrgCredentials1C::SyncClearAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}


class SyncSetEnabledAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncSetEnabledAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetEnabledAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
};

SyncSetEnabledAvOpenhomeOrgCredentials1C::SyncSetEnabledAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnabledAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnabled(aAsync);
}


class SyncGetAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncGetAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    Brh& iUserName;
    Brh& iPassword;
    TBool& iEnabled;
    Brh& iStatus;
    Brh& iData;
};

SyncGetAvOpenhomeOrgCredentials1C::SyncGetAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
    : iService(aProxy)
    , iUserName(aUserName)
    , iPassword(aPassword)
    , iEnabled(aEnabled)
    , iStatus(aStatus)
    , iData(aData)
{
}

void SyncGetAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGet(aAsync, iUserName, iPassword, iEnabled, iStatus, iData);
}


class SyncLoginAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncLoginAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aToken);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLoginAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    Brh& iToken;
};

SyncLoginAvOpenhomeOrgCredentials1C::SyncLoginAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aToken)
    : iService(aProxy)
    , iToken(aToken)
{
}

void SyncLoginAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogin(aAsync, iToken);
}


class SyncReLoginAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncReLoginAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aNewToken);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReLoginAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    Brh& iNewToken;
};

SyncReLoginAvOpenhomeOrgCredentials1C::SyncReLoginAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aNewToken)
    : iService(aProxy)
    , iNewToken(aNewToken)
{
}

void SyncReLoginAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReLogin(aAsync, iNewToken);
}


class SyncGetIdsAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncGetIdsAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aIds);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIdsAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    Brh& iIds;
};

SyncGetIdsAvOpenhomeOrgCredentials1C::SyncGetIdsAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aIds)
    : iService(aProxy)
    , iIds(aIds)
{
}

void SyncGetIdsAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIds(aAsync, iIds);
}


class SyncGetPublicKeyAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncGetPublicKeyAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    Brh& iPublicKey;
};

SyncGetPublicKeyAvOpenhomeOrgCredentials1C::SyncGetPublicKeyAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncGetSequenceNumberAvOpenhomeOrgCredentials1C : public SyncProxyAction
{
public:
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, TUint& aSequenceNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSequenceNumberAvOpenhomeOrgCredentials1C() {};
private:
    CpProxyAvOpenhomeOrgCredentials1C& iService;
    TUint& iSequenceNumber;
};

SyncGetSequenceNumberAvOpenhomeOrgCredentials1C::SyncGetSequenceNumberAvOpenhomeOrgCredentials1C(CpProxyAvOpenhomeOrgCredentials1C& aProxy, TUint& aSequenceNumber)
    : iService(aProxy)
    , iSequenceNumber(aSequenceNumber)
{
}

void SyncGetSequenceNumberAvOpenhomeOrgCredentials1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSequenceNumber(aAsync, iSequenceNumber);
}

CpProxyAvOpenhomeOrgCredentials1C::CpProxyAvOpenhomeOrgCredentials1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Credentials", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionSet = new Action("Set");
    param = new OpenHome::Net::ParameterString("Id");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("UserName");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("Password");
    iActionSet->AddInputParameter(param);

    iActionClear = new Action("Clear");
    param = new OpenHome::Net::ParameterString("Id");
    iActionClear->AddInputParameter(param);

    iActionSetEnabled = new Action("SetEnabled");
    param = new OpenHome::Net::ParameterString("Id");
    iActionSetEnabled->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetEnabled->AddInputParameter(param);

    iActionGet = new Action("Get");
    param = new OpenHome::Net::ParameterString("Id");
    iActionGet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("UserName");
    iActionGet->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBinary("Password");
    iActionGet->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGet->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Status");
    iActionGet->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Data");
    iActionGet->AddOutputParameter(param);

    iActionLogin = new Action("Login");
    param = new OpenHome::Net::ParameterString("Id");
    iActionLogin->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Token");
    iActionLogin->AddOutputParameter(param);

    iActionReLogin = new Action("ReLogin");
    param = new OpenHome::Net::ParameterString("Id");
    iActionReLogin->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentToken");
    iActionReLogin->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NewToken");
    iActionReLogin->AddOutputParameter(param);

    iActionGetIds = new Action("GetIds");
    param = new OpenHome::Net::ParameterString("Ids");
    iActionGetIds->AddOutputParameter(param);

    iActionGetPublicKey = new Action("GetPublicKey");
    param = new OpenHome::Net::ParameterString("PublicKey");
    iActionGetPublicKey->AddOutputParameter(param);

    iActionGetSequenceNumber = new Action("GetSequenceNumber");
    param = new OpenHome::Net::ParameterUint("SequenceNumber");
    iActionGetSequenceNumber->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1C::IdsPropertyChanged);
    iIds = new PropertyString("Ids", functor);
    AddProperty(iIds);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1C::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1C::SequenceNumberPropertyChanged);
    iSequenceNumber = new PropertyUint("SequenceNumber", functor);
    AddProperty(iSequenceNumber);
}

CpProxyAvOpenhomeOrgCredentials1C::~CpProxyAvOpenhomeOrgCredentials1C()
{
    DestroyService();
    delete iActionSet;
    delete iActionClear;
    delete iActionSetEnabled;
    delete iActionGet;
    delete iActionLogin;
    delete iActionReLogin;
    delete iActionGetIds;
    delete iActionGetPublicKey;
    delete iActionGetSequenceNumber;
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword)
{
    SyncSetAvOpenhomeOrgCredentials1C sync(*this);
    BeginSet(aId, aUserName, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUserName));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aPassword));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndSet(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Set"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncClear(const Brx& aId)
{
    SyncClearAvOpenhomeOrgCredentials1C sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginClear(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndClear(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1C::SyncSetEnabled(const Brx& aId, TBool aEnabled)
{
    SyncSetEnabledAvOpenhomeOrgCredentials1C sync(*this);
    BeginSetEnabled(aId, aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginSetEnabled(const Brx& aId, TBool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnabled->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndSetEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncGet(const Brx& aId, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
{
    SyncGetAvOpenhomeOrgCredentials1C sync(*this, aUserName, aPassword, aEnabled, aStatus, aData);
    BeginGet(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginGet(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGet->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndGet(IAsync& aAsync, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Get"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUserName);
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aPassword);
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aStatus);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aData);
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncLogin(const Brx& aId, Brh& aToken)
{
    SyncLoginAvOpenhomeOrgCredentials1C sync(*this, aToken);
    BeginLogin(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginLogin(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogin->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndLogin(IAsync& aAsync, Brh& aToken)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Login"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aToken);
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncReLogin(const Brx& aId, const Brx& aCurrentToken, Brh& aNewToken)
{
    SyncReLoginAvOpenhomeOrgCredentials1C sync(*this, aNewToken);
    BeginReLogin(aId, aCurrentToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginReLogin(const Brx& aId, const Brx& aCurrentToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReLogin->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndReLogin(IAsync& aAsync, Brh& aNewToken)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReLogin"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNewToken);
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncGetIds(Brh& aIds)
{
    SyncGetIdsAvOpenhomeOrgCredentials1C sync(*this, aIds);
    BeginGetIds(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginGetIds(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIds, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIds->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndGetIds(IAsync& aAsync, Brh& aIds)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetIds"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aIds);
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyAvOpenhomeOrgCredentials1C sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPublicKey"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aPublicKey);
}

void CpProxyAvOpenhomeOrgCredentials1C::SyncGetSequenceNumber(TUint& aSequenceNumber)
{
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1C sync(*this, aSequenceNumber);
    BeginGetSequenceNumber(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1C::BeginGetSequenceNumber(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSequenceNumber, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSequenceNumber->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1C::EndGetSequenceNumber(IAsync& aAsync, TUint& aSequenceNumber)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSequenceNumber"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSequenceNumber = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgCredentials1C::SetPropertyIdsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgCredentials1C::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPublicKeyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgCredentials1C::SetPropertySequenceNumberChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSequenceNumberChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgCredentials1C::PropertyIds(Brhz& aIds) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIds.Set(iIds->Value());
}

void CpProxyAvOpenhomeOrgCredentials1C::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyAvOpenhomeOrgCredentials1C::PropertySequenceNumber(TUint& aSequenceNumber) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSequenceNumber = iSequenceNumber->Value();
}

void CpProxyAvOpenhomeOrgCredentials1C::IdsPropertyChanged()
{
    ReportEvent(iIdsChanged);
}

void CpProxyAvOpenhomeOrgCredentials1C::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyAvOpenhomeOrgCredentials1C::SequenceNumberPropertyChanged()
{
    ReportEvent(iSequenceNumberChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgCredentials1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgCredentials1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncSet(THandle aHandle, const char* aId, const char* aUserName, const char* aPassword, uint32_t aPasswordLen)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aUserName(aUserName);
    Brh buf_aPassword;
    buf_aPassword.Set((const TByte*)aPassword, aPasswordLen);
    int32_t err = 0;
    try {
        proxyC->SyncSet(buf_aId, buf_aUserName, buf_aPassword);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginSet(THandle aHandle, const char* aId, const char* aUserName, const char* aPassword, uint32_t aPasswordLen, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aUserName(aUserName);
    Brh buf_aPassword;
    buf_aPassword.Set((const TByte*)aPassword, aPasswordLen);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aId, buf_aUserName, buf_aPassword, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSet(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncClear(THandle aHandle, const char* aId)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    int32_t err = 0;
    try {
        proxyC->SyncClear(buf_aId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginClear(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClear(buf_aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndClear(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncSetEnabled(THandle aHandle, const char* aId, uint32_t aEnabled)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    int32_t err = 0;
    try {
        proxyC->SyncSetEnabled(buf_aId, (aEnabled==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginSetEnabled(THandle aHandle, const char* aId, uint32_t aEnabled, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetEnabled(buf_aId, (aEnabled==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndSetEnabled(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetEnabled(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGet(THandle aHandle, const char* aId, char** aUserName, char** aPassword, uint32_t* aPasswordLen, uint32_t* aEnabled, char** aStatus, char** aData)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aUserName;
    Brh buf_aPassword;
    TBool Enabled;
    Brh buf_aStatus;
    Brh buf_aData;
    int32_t err = 0;
    try {
        proxyC->SyncGet(buf_aId, buf_aUserName, buf_aPassword, Enabled, buf_aStatus, buf_aData);
        *aUserName = buf_aUserName.Extract();
        *aPasswordLen = buf_aPassword.Bytes();
        *aPassword = buf_aPassword.Extract();
        *aEnabled = Enabled? 1 : 0;
        *aStatus = buf_aStatus.Extract();
        *aData = buf_aData.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUserName = NULL;
        *aPasswordLen = 0;
        *aPassword = NULL;
        *aEnabled = false;
        *aStatus = NULL;
        *aData = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGet(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGet(buf_aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGet(THandle aHandle, OhNetHandleAsync aAsync, char** aUserName, char** aPassword, uint32_t* aPasswordLen, uint32_t* aEnabled, char** aStatus, char** aData)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUserName;
    *aUserName = NULL;
    Brh buf_aPassword;
    *aPassword = NULL;
    *aPasswordLen = 0;
    TBool Enabled;
    Brh buf_aStatus;
    *aStatus = NULL;
    Brh buf_aData;
    *aData = NULL;
    try {
        proxyC->EndGet(*async, buf_aUserName, buf_aPassword, Enabled, buf_aStatus, buf_aData);
        *aUserName = buf_aUserName.Extract();
        *aPasswordLen = buf_aPassword.Bytes();
        *aPassword = buf_aPassword.Extract();
        *aEnabled = Enabled? 1 : 0;
        *aStatus = buf_aStatus.Extract();
        *aData = buf_aData.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncLogin(THandle aHandle, const char* aId, char** aToken)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aToken;
    int32_t err = 0;
    try {
        proxyC->SyncLogin(buf_aId, buf_aToken);
        *aToken = buf_aToken.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aToken = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginLogin(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginLogin(buf_aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndLogin(THandle aHandle, OhNetHandleAsync aAsync, char** aToken)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aToken;
    *aToken = NULL;
    try {
        proxyC->EndLogin(*async, buf_aToken);
        *aToken = buf_aToken.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncReLogin(THandle aHandle, const char* aId, const char* aCurrentToken, char** aNewToken)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aCurrentToken(aCurrentToken);
    Brh buf_aNewToken;
    int32_t err = 0;
    try {
        proxyC->SyncReLogin(buf_aId, buf_aCurrentToken, buf_aNewToken);
        *aNewToken = buf_aNewToken.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNewToken = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginReLogin(THandle aHandle, const char* aId, const char* aCurrentToken, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aId(aId);
    Brh buf_aCurrentToken(aCurrentToken);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReLogin(buf_aId, buf_aCurrentToken, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndReLogin(THandle aHandle, OhNetHandleAsync aAsync, char** aNewToken)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNewToken;
    *aNewToken = NULL;
    try {
        proxyC->EndReLogin(*async, buf_aNewToken);
        *aNewToken = buf_aNewToken.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetIds(THandle aHandle, char** aIds)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIds;
    int32_t err = 0;
    try {
        proxyC->SyncGetIds(buf_aIds);
        *aIds = buf_aIds.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aIds = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetIds(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIds(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetIds(THandle aHandle, OhNetHandleAsync aAsync, char** aIds)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aIds;
    *aIds = NULL;
    try {
        proxyC->EndGetIds(*async, buf_aIds);
        *aIds = buf_aIds.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aPublicKey;
    int32_t err = 0;
    try {
        proxyC->SyncGetPublicKey(buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aPublicKey = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPublicKey(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aPublicKey;
    *aPublicKey = NULL;
    try {
        proxyC->EndGetPublicKey(*async, buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetSequenceNumber(THandle aHandle, uint32_t* aSequenceNumber)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetSequenceNumber(*aSequenceNumber);
    }
    catch (ProxyError& ) {
        err = -1;
        *aSequenceNumber = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetSequenceNumber(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSequenceNumber(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetSequenceNumber(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSequenceNumber)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetSequenceNumber(*async, *aSequenceNumber);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertyIdsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPublicKeyChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertySequenceNumberChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySequenceNumberChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertyIds(THandle aHandle, char** aIds)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aIds;
    try {
        proxyC->PropertyIds(buf_aIds);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aIds = buf_aIds.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertyPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPublicKey;
    try {
        proxyC->PropertyPublicKey(buf_aPublicKey);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPublicKey = buf_aPublicKey.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertySequenceNumber(THandle aHandle, uint32_t* aSequenceNumber)
{
    CpProxyAvOpenhomeOrgCredentials1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgCredentials1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySequenceNumber(*aSequenceNumber);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

