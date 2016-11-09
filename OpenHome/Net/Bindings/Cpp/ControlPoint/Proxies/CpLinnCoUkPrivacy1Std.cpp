#include "CpLinnCoUkPrivacy1.h"
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


class SyncGetPolicyVersionLinnCoUkPrivacy1Cpp : public SyncProxyAction
{
public:
    SyncGetPolicyVersionLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, uint32_t& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyVersionLinnCoUkPrivacy1Cpp() {}
private:
    CpProxyLinnCoUkPrivacy1Cpp& iService;
    uint32_t& iVersion;
};

SyncGetPolicyVersionLinnCoUkPrivacy1Cpp::SyncGetPolicyVersionLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, uint32_t& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyVersionLinnCoUkPrivacy1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyVersion(aAsync, iVersion);
}


class SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp : public SyncProxyAction
{
public:
    SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, uint32_t& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp() {}
private:
    CpProxyLinnCoUkPrivacy1Cpp& iService;
    uint32_t& iVersion;
};

SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp::SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, uint32_t& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyAgreed(aAsync, iVersion);
}


class SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp : public SyncProxyAction
{
public:
    SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, std::string& aDetails);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp() {}
private:
    CpProxyLinnCoUkPrivacy1Cpp& iService;
    std::string& iDetails;
};

SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp::SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy, std::string& aDetails)
    : iService(aProxy)
    , iDetails(aDetails)
{
}

void SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyDetails(aAsync, iDetails);
}


class SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp : public SyncProxyAction
{
public:
    SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp() {}
private:
    CpProxyLinnCoUkPrivacy1Cpp& iService;
};

SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp::SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp(CpProxyLinnCoUkPrivacy1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPolicyDetails(aAsync);
}


CpProxyLinnCoUkPrivacy1Cpp::CpProxyLinnCoUkPrivacy1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Privacy", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetPolicyVersion = new Action("GetPolicyVersion");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyVersion->AddOutputParameter(param);

    iActionGetPolicyAgreed = new Action("GetPolicyAgreed");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyAgreed->AddOutputParameter(param);

    iActionGetPolicyDetails = new Action("GetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionGetPolicyDetails->AddOutputParameter(param);

    iActionSetPolicyDetails = new Action("SetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionSetPolicyDetails->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1Cpp::PolicyVersionPropertyChanged);
    iPolicyVersion = new PropertyUint("PolicyVersion", functor);
    AddProperty(iPolicyVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1Cpp::PolicyAgreedPropertyChanged);
    iPolicyAgreed = new PropertyUint("PolicyAgreed", functor);
    AddProperty(iPolicyAgreed);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1Cpp::PolicyDetailsPropertyChanged);
    iPolicyDetails = new PropertyString("PolicyDetails", functor);
    AddProperty(iPolicyDetails);
}

CpProxyLinnCoUkPrivacy1Cpp::~CpProxyLinnCoUkPrivacy1Cpp()
{
    DestroyService();
    delete iActionGetPolicyVersion;
    delete iActionGetPolicyAgreed;
    delete iActionGetPolicyDetails;
    delete iActionSetPolicyDetails;
}

void CpProxyLinnCoUkPrivacy1Cpp::SyncGetPolicyVersion(uint32_t& aVersion)
{
    SyncGetPolicyVersionLinnCoUkPrivacy1Cpp sync(*this, aVersion);
    BeginGetPolicyVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1Cpp::BeginGetPolicyVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1Cpp::EndGetPolicyVersion(IAsync& aAsync, uint32_t& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkPrivacy1Cpp::SyncGetPolicyAgreed(uint32_t& aVersion)
{
    SyncGetPolicyAgreedLinnCoUkPrivacy1Cpp sync(*this, aVersion);
    BeginGetPolicyAgreed(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1Cpp::BeginGetPolicyAgreed(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyAgreed, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyAgreed->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1Cpp::EndGetPolicyAgreed(IAsync& aAsync, uint32_t& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyAgreed"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkPrivacy1Cpp::SyncGetPolicyDetails(std::string& aDetails)
{
    SyncGetPolicyDetailsLinnCoUkPrivacy1Cpp sync(*this, aDetails);
    BeginGetPolicyDetails(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1Cpp::BeginGetPolicyDetails(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyDetails, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyDetails->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1Cpp::EndGetPolicyDetails(IAsync& aAsync, std::string& aDetails)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyDetails"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDetails.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkPrivacy1Cpp::SyncSetPolicyDetails(const std::string& aDetails)
{
    SyncSetPolicyDetailsLinnCoUkPrivacy1Cpp sync(*this);
    BeginSetPolicyDetails(aDetails, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1Cpp::BeginSetPolicyDetails(const std::string& aDetails, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPolicyDetails, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPolicyDetails->InputParameters();
    {
        Brn buf((const TByte*)aDetails.c_str(), (TUint)aDetails.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1Cpp::EndSetPolicyDetails(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPolicyDetails"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkPrivacy1Cpp::SetPropertyPolicyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1Cpp::SetPropertyPolicyAgreedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyAgreedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1Cpp::SetPropertyPolicyDetailsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyDetailsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1Cpp::PropertyPolicyVersion(uint32_t& aPolicyVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPolicyVersion = iPolicyVersion->Value();
}

void CpProxyLinnCoUkPrivacy1Cpp::PropertyPolicyAgreed(uint32_t& aPolicyAgreed) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPolicyAgreed = iPolicyAgreed->Value();
}

void CpProxyLinnCoUkPrivacy1Cpp::PropertyPolicyDetails(std::string& aPolicyDetails) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPolicyDetails->Value();
    aPolicyDetails.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkPrivacy1Cpp::PolicyVersionPropertyChanged()
{
    ReportEvent(iPolicyVersionChanged);
}

void CpProxyLinnCoUkPrivacy1Cpp::PolicyAgreedPropertyChanged()
{
    ReportEvent(iPolicyAgreedChanged);
}

void CpProxyLinnCoUkPrivacy1Cpp::PolicyDetailsPropertyChanged()
{
    ReportEvent(iPolicyDetailsChanged);
}

void CpProxyLinnCoUkPrivacy1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkPrivacy1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkPrivacy1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkPrivacy1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkPrivacy1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkPrivacy1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkPrivacy1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkPrivacy1Cpp::Version() const
{
  return iCpProxy.Version();
}

