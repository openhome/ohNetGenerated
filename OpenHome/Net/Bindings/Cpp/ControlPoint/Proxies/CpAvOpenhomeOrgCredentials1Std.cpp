#include "CpAvOpenhomeOrgCredentials1.h"
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


class SyncSetAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
};

SyncSetAvOpenhomeOrgCredentials1Cpp::SyncSetAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncClearAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncClearAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
};

SyncClearAvOpenhomeOrgCredentials1Cpp::SyncClearAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClear(aAsync);
}


class SyncSetEnabledAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncSetEnabledAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetEnabledAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
};

SyncSetEnabledAvOpenhomeOrgCredentials1Cpp::SyncSetEnabledAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnabledAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnabled(aAsync);
}


class SyncGetAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncGetAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    std::string& iUserName;
    std::string& iPassword;
    bool& iEnabled;
    std::string& iStatus;
    std::string& iData;
};

SyncGetAvOpenhomeOrgCredentials1Cpp::SyncGetAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData)
    : iService(aProxy)
    , iUserName(aUserName)
    , iPassword(aPassword)
    , iEnabled(aEnabled)
    , iStatus(aStatus)
    , iData(aData)
{
}

void SyncGetAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGet(aAsync, iUserName, iPassword, iEnabled, iStatus, iData);
}


class SyncLoginAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncLoginAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aToken);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLoginAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    std::string& iToken;
};

SyncLoginAvOpenhomeOrgCredentials1Cpp::SyncLoginAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aToken)
    : iService(aProxy)
    , iToken(aToken)
{
}

void SyncLoginAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogin(aAsync, iToken);
}


class SyncReLoginAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncReLoginAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aNewToken);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReLoginAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    std::string& iNewToken;
};

SyncReLoginAvOpenhomeOrgCredentials1Cpp::SyncReLoginAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aNewToken)
    : iService(aProxy)
    , iNewToken(aNewToken)
{
}

void SyncReLoginAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReLogin(aAsync, iNewToken);
}


class SyncGetIdsAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncGetIdsAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aIds);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIdsAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    std::string& iIds;
};

SyncGetIdsAvOpenhomeOrgCredentials1Cpp::SyncGetIdsAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aIds)
    : iService(aProxy)
    , iIds(aIds)
{
}

void SyncGetIdsAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIds(aAsync, iIds);
}


class SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    std::string& iPublicKey;
};

SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp::SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, std::string& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp : public SyncProxyAction
{
public:
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, uint32_t& aSequenceNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp() {}
private:
    CpProxyAvOpenhomeOrgCredentials1Cpp& iService;
    uint32_t& iSequenceNumber;
};

SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp::SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp(CpProxyAvOpenhomeOrgCredentials1Cpp& aProxy, uint32_t& aSequenceNumber)
    : iService(aProxy)
    , iSequenceNumber(aSequenceNumber)
{
}

void SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSequenceNumber(aAsync, iSequenceNumber);
}


CpProxyAvOpenhomeOrgCredentials1Cpp::CpProxyAvOpenhomeOrgCredentials1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1Cpp::IdsPropertyChanged);
    iIds = new PropertyString("Ids", functor);
    AddProperty(iIds);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1Cpp::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgCredentials1Cpp::SequenceNumberPropertyChanged);
    iSequenceNumber = new PropertyUint("SequenceNumber", functor);
    AddProperty(iSequenceNumber);
}

CpProxyAvOpenhomeOrgCredentials1Cpp::~CpProxyAvOpenhomeOrgCredentials1Cpp()
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

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword)
{
    SyncSetAvOpenhomeOrgCredentials1Cpp sync(*this);
    BeginSet(aId, aUserName, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aUserName.c_str(), (TUint)aUserName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aPassword.c_str(), (TUint)aPassword.length());
        invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncClear(const std::string& aId)
{
    SyncClearAvOpenhomeOrgCredentials1Cpp sync(*this);
    BeginClear(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginClear(const std::string& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClear, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClear->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndClear(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncSetEnabled(const std::string& aId, bool aEnabled)
{
    SyncSetEnabledAvOpenhomeOrgCredentials1Cpp sync(*this);
    BeginSetEnabled(aId, aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginSetEnabled(const std::string& aId, bool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnabled->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndSetEnabled(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncGet(const std::string& aId, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData)
{
    SyncGetAvOpenhomeOrgCredentials1Cpp sync(*this, aUserName, aPassword, aEnabled, aStatus, aData);
    BeginGet(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginGet(const std::string& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGet->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGet->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndGet(IAsync& aAsync, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUserName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aPassword.assign((const char*)val.Ptr(), val.Bytes());
    }
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aData.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncLogin(const std::string& aId, std::string& aToken)
{
    SyncLoginAvOpenhomeOrgCredentials1Cpp sync(*this, aToken);
    BeginLogin(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginLogin(const std::string& aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogin->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndLogin(IAsync& aAsync, std::string& aToken)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aToken.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncReLogin(const std::string& aId, const std::string& aCurrentToken, std::string& aNewToken)
{
    SyncReLoginAvOpenhomeOrgCredentials1Cpp sync(*this, aNewToken);
    BeginReLogin(aId, aCurrentToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginReLogin(const std::string& aId, const std::string& aCurrentToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReLogin, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReLogin->InputParameters();
    {
        Brn buf((const TByte*)aId.c_str(), (TUint)aId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aCurrentToken.c_str(), (TUint)aCurrentToken.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReLogin->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndReLogin(IAsync& aAsync, std::string& aNewToken)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNewToken.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncGetIds(std::string& aIds)
{
    SyncGetIdsAvOpenhomeOrgCredentials1Cpp sync(*this, aIds);
    BeginGetIds(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginGetIds(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIds, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIds->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndGetIds(IAsync& aAsync, std::string& aIds)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aIds.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncGetPublicKey(std::string& aPublicKey)
{
    SyncGetPublicKeyAvOpenhomeOrgCredentials1Cpp sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SyncGetSequenceNumber(uint32_t& aSequenceNumber)
{
    SyncGetSequenceNumberAvOpenhomeOrgCredentials1Cpp sync(*this, aSequenceNumber);
    BeginGetSequenceNumber(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::BeginGetSequenceNumber(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSequenceNumber, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSequenceNumber->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::EndGetSequenceNumber(IAsync& aAsync, uint32_t& aSequenceNumber)
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

void CpProxyAvOpenhomeOrgCredentials1Cpp::SetPropertyIdsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SetPropertySequenceNumberChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSequenceNumberChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::PropertyIds(std::string& aIds) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIds->Value();
    aIds.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::PropertyPublicKey(std::string& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPublicKey->Value();
    aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::PropertySequenceNumber(uint32_t& aSequenceNumber) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSequenceNumber = iSequenceNumber->Value();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::IdsPropertyChanged()
{
    ReportEvent(iIdsChanged);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SequenceNumberPropertyChanged()
{
    ReportEvent(iSequenceNumberChanged);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgCredentials1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgCredentials1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgCredentials1Cpp::Version() const
{
  return iCpProxy.Version();
}

