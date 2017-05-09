#include "CpLinnCoUkCloud1.h"
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


class SyncGetChallengeResponseLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChallengeResponseLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    std::string& iResponse;
};

SyncGetChallengeResponseLinnCoUkCloud1Cpp::SyncGetChallengeResponseLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}


class SyncSetAssociationStatusLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncSetAssociationStatusLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociationStatusLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
};

SyncSetAssociationStatusLinnCoUkCloud1Cpp::SyncSetAssociationStatusLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociationStatusLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociationStatus(aAsync);
}


class SyncGetAssociationStatusLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetAssociationStatusLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAssociationStatusLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    std::string& iStatus;
};

SyncGetAssociationStatusLinnCoUkCloud1Cpp::SyncGetAssociationStatusLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aStatus)
    : iService(aProxy)
    , iStatus(aStatus)
{
}

void SyncGetAssociationStatusLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAssociationStatus(aAsync, iStatus);
}


class SyncSetControlEnabledLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncSetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetControlEnabledLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
};

SyncSetControlEnabledLinnCoUkCloud1Cpp::SyncSetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetControlEnabledLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetControlEnabled(aAsync);
}


class SyncGetControlEnabledLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aEnabled);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetControlEnabledLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    bool& iEnabled;
};

SyncGetControlEnabledLinnCoUkCloud1Cpp::SyncGetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aEnabled)
    : iService(aProxy)
    , iEnabled(aEnabled)
{
}

void SyncGetControlEnabledLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetControlEnabled(aAsync, iEnabled);
}


CpProxyLinnCoUkCloud1Cpp::CpProxyLinnCoUkCloud1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Cloud", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionGetChallengeResponse = new Action("GetChallengeResponse");
    param = new OpenHome::Net::ParameterString("Challenge");
    iActionGetChallengeResponse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Response");
    iActionGetChallengeResponse->AddOutputParameter(param);

    iActionSetAssociationStatus = new Action("SetAssociationStatus");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Associated";
    allowedValues[index++] = (TChar*)"NotAssociated";
    allowedValues[index++] = (TChar*)"Unconfigured";
    param = new OpenHome::Net::ParameterString("Status", allowedValues, 3);
    iActionSetAssociationStatus->AddInputParameter(param);
    delete[] allowedValues;

    iActionGetAssociationStatus = new Action("GetAssociationStatus");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Associated";
    allowedValues[index++] = (TChar*)"NotAssociated";
    allowedValues[index++] = (TChar*)"Unconfigured";
    param = new OpenHome::Net::ParameterString("Status", allowedValues, 3);
    iActionGetAssociationStatus->AddOutputParameter(param);
    delete[] allowedValues;

    iActionSetControlEnabled = new Action("SetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetControlEnabled->AddInputParameter(param);

    iActionGetControlEnabled = new Action("GetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGetControlEnabled->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::ControlEnabledPropertyChanged);
    iControlEnabled = new PropertyBool("ControlEnabled", functor);
    AddProperty(iControlEnabled);
}

CpProxyLinnCoUkCloud1Cpp::~CpProxyLinnCoUkCloud1Cpp()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetAssociationStatus;
    delete iActionGetAssociationStatus;
    delete iActionSetControlEnabled;
    delete iActionGetControlEnabled;
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetChallengeResponse(const std::string& aChallenge, std::string& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud1Cpp sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetChallengeResponse(const std::string& aChallenge, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChallengeResponse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetChallengeResponse->InputParameters();
    {
        Brn buf((const TByte*)aChallenge.c_str(), (TUint)aChallenge.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChallengeResponse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetChallengeResponse(IAsync& aAsync, std::string& aResponse)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetChallengeResponse"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aResponse.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncSetAssociationStatus(const std::string& aStatus)
{
    SyncSetAssociationStatusLinnCoUkCloud1Cpp sync(*this);
    BeginSetAssociationStatus(aStatus, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginSetAssociationStatus(const std::string& aStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociationStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociationStatus->InputParameters();
    {
        Brn buf((const TByte*)aStatus.c_str(), (TUint)aStatus.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndSetAssociationStatus(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociationStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetAssociationStatus(std::string& aStatus)
{
    SyncGetAssociationStatusLinnCoUkCloud1Cpp sync(*this, aStatus);
    BeginGetAssociationStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetAssociationStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAssociationStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAssociationStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetAssociationStatus(IAsync& aAsync, std::string& aStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAssociationStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncSetControlEnabled(bool aEnabled)
{
    SyncSetControlEnabledLinnCoUkCloud1Cpp sync(*this);
    BeginSetControlEnabled(aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginSetControlEnabled(bool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetControlEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetControlEnabled->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndSetControlEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetControlEnabled(bool& aEnabled)
{
    SyncGetControlEnabledLinnCoUkCloud1Cpp sync(*this, aEnabled);
    BeginGetControlEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetControlEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetControlEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetControlEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetControlEnabled(IAsync& aAsync, bool& aEnabled)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyControlEnabledChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iControlEnabledChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::PropertyAssociationStatus(std::string& aAssociationStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAssociationStatus->Value();
    aAssociationStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud1Cpp::PropertyControlEnabled(bool& aControlEnabled) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aControlEnabled = iControlEnabled->Value();
}

void CpProxyLinnCoUkCloud1Cpp::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud1Cpp::ControlEnabledPropertyChanged()
{
    ReportEvent(iControlEnabledChanged);
}

void CpProxyLinnCoUkCloud1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkCloud1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkCloud1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkCloud1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkCloud1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkCloud1Cpp::Version() const
{
  return iCpProxy.Version();
}

