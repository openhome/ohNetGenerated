#include "CpAvOpenhomeOrgCredentials1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
};

class SyncClearAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
};

class SyncSetEnabledAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncSetEnabledAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
};

class SyncGetAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncGetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    Brh& iUserName;
    Brh& iPassword;
    TBool& iEnabled;
    Brh& iStatus;
    Brh& iData;
};

class SyncLoginAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aToken);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    Brh& iToken;
};

class SyncReLoginAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncReLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aNewToken);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    Brh& iNewToken;
};

class SyncGetIdsAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncGetIdsAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aIds);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    Brh& iIds;
};

class SyncGetPublicKeyAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncGetPublicKeyAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    Brh& iPublicKey;
};

class SyncGetSequenceNumberAvOpenhomeOrgCredentials1 : public SyncProxyAction
{
public:
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, TUint& aSequenceNumber);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgCredentials1& iService;
    TUint& iSequenceNumber;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetAvOpenhomeOrgCredentials1

SyncSetAvOpenhomeOrgCredentials1::SyncSetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}

// SyncClearAvOpenhomeOrgCredentials1

SyncClearAvOpenhomeOrgCredentials1::SyncClearAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}

// SyncSetEnabledAvOpenhomeOrgCredentials1

SyncSetEnabledAvOpenhomeOrgCredentials1::SyncSetEnabledAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnabledAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnabled(aAsync);
}

// SyncGetAvOpenhomeOrgCredentials1

SyncGetAvOpenhomeOrgCredentials1::SyncGetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
    : iService(aProxy)
    , iUserName(aUserName)
    , iPassword(aPassword)
    , iEnabled(aEnabled)
    , iStatus(aStatus)
    , iData(aData)
{
}

void SyncGetAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGet(aAsync, iUserName, iPassword, iEnabled, iStatus, iData);
}

// SyncLoginAvOpenhomeOrgCredentials1

SyncLoginAvOpenhomeOrgCredentials1::SyncLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aToken)
    : iService(aProxy)
    , iToken(aToken)
{
}

void SyncLoginAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogin(aAsync, iToken);
}

// SyncReLoginAvOpenhomeOrgCredentials1

SyncReLoginAvOpenhomeOrgCredentials1::SyncReLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aNewToken)
    : iService(aProxy)
    , iNewToken(aNewToken)
{
}

void SyncReLoginAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndReLogin(aAsync, iNewToken);
}

// SyncGetIdsAvOpenhomeOrgCredentials1

SyncGetIdsAvOpenhomeOrgCredentials1::SyncGetIdsAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aIds)
    : iService(aProxy)
    , iIds(aIds)
{
}

void SyncGetIdsAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIds(aAsync, iIds);
}

// SyncGetPublicKeyAvOpenhomeOrgCredentials1

SyncGetPublicKeyAvOpenhomeOrgCredentials1::SyncGetPublicKeyAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}

// SyncGetSequenceNumberAvOpenhomeOrgCredentials1

SyncGetSequenceNumberAvOpenhomeOrgCredentials1::SyncGetSequenceNumberAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1& aProxy, TUint& aSequenceNumber)
    : iService(aProxy)
    , iSequenceNumber(aSequenceNumber)
{
}

void SyncGetSequenceNumberAvOpenhomeOrgCredentials1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSequenceNumber(aAsync, iSequenceNumber);
}


// CpProxyAvOpenhomeOrgCredentials1

CpProxyAvOpenhomeOrgCredentials1::CpProxyAvOpenhomeOrgCredentials1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Credentials", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1::IdsPropertyChanged);
    iIds = new PropertyString("Ids", functor);
    AddProperty(iIds);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1::SequenceNumberPropertyChanged);
    iSequenceNumber = new PropertyUint("SequenceNumber", functor);
    AddProperty(iSequenceNumber);
}

CpProxyAvOpenhomeOrgCredentials1::~CpProxyAvOpenhomeOrgCredentials1()
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

void CpProxyAvOpenhomeOrgCredentials1::SyncSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword)
{
    SyncSetAvOpenhomeOrgCredentials1 sync(*this);
    BeginSet(aId, aUserName, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginSet(const Brx& aId, const Brx& aUserName, const Brx& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUserName));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aPassword));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncClear(const Brx& aId)
{
    SyncClearAvOpenhomeOrgCredentials1 sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginClear(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndClear(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncSetEnabled(const Brx& aId, TBool aEnabled)
{
    SyncSetEnabledAvOpenhomeOrgCredentials1 sync(*this);
    BeginSetEnabled(aId, aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginSetEnabled(const Brx& aId, TBool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnabled->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndSetEnabled(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncGet(const Brx& aId, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
{
    SyncGetAvOpenhomeOrgCredentials1 sync(*this, aUserName, aPassword, aEnabled, aStatus, aData);
    BeginGet(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginGet(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGet, aFunctor);
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
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndGet(IAsync& aAsync, Brh& aUserName, Brh& aPassword, TBool& aEnabled, Brh& aStatus, Brh& aData)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncLogin(const Brx& aId, Brh& aToken)
{
    SyncLoginAvOpenhomeOrgCredentials1 sync(*this, aToken);
    BeginLogin(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginLogin(const Brx& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogin->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndLogin(IAsync& aAsync, Brh& aToken)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncReLogin(const Brx& aId, const Brx& aCurrentToken, Brh& aNewToken)
{
    SyncReLoginAvOpenhomeOrgCredentials1 sync(*this, aNewToken);
    BeginReLogin(aId, aCurrentToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginReLogin(const Brx& aId, const Brx& aCurrentToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReLogin->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndReLogin(IAsync& aAsync, Brh& aNewToken)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncGetIds(Brh& aIds)
{
    SyncGetIdsAvOpenhomeOrgCredentials1 sync(*this, aIds);
    BeginGetIds(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginGetIds(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIds, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIds->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndGetIds(IAsync& aAsync, Brh& aIds)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyAvOpenhomeOrgCredentials1 sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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

void CpProxyAvOpenhomeOrgCredentials1::SyncGetSequenceNumber(TUint& aSequenceNumber)
{
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1 sync(*this, aSequenceNumber);
    BeginGetSequenceNumber(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1::BeginGetSequenceNumber(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSequenceNumber, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSequenceNumber->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1::EndGetSequenceNumber(IAsync& aAsync, TUint& aSequenceNumber)
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

void CpProxyAvOpenhomeOrgCredentials1::SetPropertyIdsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1::SetPropertySequenceNumberChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSequenceNumberChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1::PropertyIds(Brhz& aIds) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIds.Set(iIds->Value());
}

void CpProxyAvOpenhomeOrgCredentials1::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyAvOpenhomeOrgCredentials1::PropertySequenceNumber(TUint& aSequenceNumber) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSequenceNumber = iSequenceNumber->Value();
}

void CpProxyAvOpenhomeOrgCredentials1::IdsPropertyChanged()
{
    ReportEvent(iIdsChanged);
}

void CpProxyAvOpenhomeOrgCredentials1::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyAvOpenhomeOrgCredentials1::SequenceNumberPropertyChanged()
{
    ReportEvent(iSequenceNumberChanged);
}


void CpProxyAvOpenhomeOrgCredentials1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgCredentials1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgCredentials1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgCredentials1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgCredentials1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgCredentials1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgCredentials1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgCredentials1::Version() const
{
  return iCpProxy.Version();
}


