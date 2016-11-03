#include "CpLinnCoUkPrivacy1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetPolicyVersionLinnCoUkPrivacy1 : public SyncProxyAction
{
public:
    SyncGetPolicyVersionLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkPrivacy1& iService;
    TUint& iVersion;
};

class SyncGetPolicyAgreedLinnCoUkPrivacy1 : public SyncProxyAction
{
public:
    SyncGetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkPrivacy1& iService;
    TUint& iVersion;
};

class SyncSetPolicyAgreedLinnCoUkPrivacy1 : public SyncProxyAction
{
public:
    SyncSetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkPrivacy1& iService;
};

class SyncGetPolicyDetailsLinnCoUkPrivacy1 : public SyncProxyAction
{
public:
    SyncGetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, Brh& aDetails);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkPrivacy1& iService;
    Brh& iDetails;
};

class SyncSetPolicyDetailsLinnCoUkPrivacy1 : public SyncProxyAction
{
public:
    SyncSetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkPrivacy1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetPolicyVersionLinnCoUkPrivacy1

SyncGetPolicyVersionLinnCoUkPrivacy1::SyncGetPolicyVersionLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyVersionLinnCoUkPrivacy1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyVersion(aAsync, iVersion);
}

// SyncGetPolicyAgreedLinnCoUkPrivacy1

SyncGetPolicyAgreedLinnCoUkPrivacy1::SyncGetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyAgreedLinnCoUkPrivacy1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyAgreed(aAsync, iVersion);
}

// SyncSetPolicyAgreedLinnCoUkPrivacy1

SyncSetPolicyAgreedLinnCoUkPrivacy1::SyncSetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPolicyAgreedLinnCoUkPrivacy1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPolicyAgreed(aAsync);
}

// SyncGetPolicyDetailsLinnCoUkPrivacy1

SyncGetPolicyDetailsLinnCoUkPrivacy1::SyncGetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy, Brh& aDetails)
    : iService(aProxy)
    , iDetails(aDetails)
{
}

void SyncGetPolicyDetailsLinnCoUkPrivacy1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyDetails(aAsync, iDetails);
}

// SyncSetPolicyDetailsLinnCoUkPrivacy1

SyncSetPolicyDetailsLinnCoUkPrivacy1::SyncSetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPolicyDetailsLinnCoUkPrivacy1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPolicyDetails(aAsync);
}


// CpProxyLinnCoUkPrivacy1

CpProxyLinnCoUkPrivacy1::CpProxyLinnCoUkPrivacy1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Privacy", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetPolicyVersion = new Action("GetPolicyVersion");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyVersion->AddOutputParameter(param);

    iActionGetPolicyAgreed = new Action("GetPolicyAgreed");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyAgreed->AddOutputParameter(param);

    iActionSetPolicyAgreed = new Action("SetPolicyAgreed");
    param = new OpenHome::Net::ParameterUint("Agreed");
    iActionSetPolicyAgreed->AddInputParameter(param);

    iActionGetPolicyDetails = new Action("GetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionGetPolicyDetails->AddOutputParameter(param);

    iActionSetPolicyDetails = new Action("SetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionSetPolicyDetails->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1::PolicyVersionPropertyChanged);
    iPolicyVersion = new PropertyUint("PolicyVersion", functor);
    AddProperty(iPolicyVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1::PolicyAgreedPropertyChanged);
    iPolicyAgreed = new PropertyUint("PolicyAgreed", functor);
    AddProperty(iPolicyAgreed);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1::PolicyDetailsPropertyChanged);
    iPolicyDetails = new PropertyString("PolicyDetails", functor);
    AddProperty(iPolicyDetails);
}

CpProxyLinnCoUkPrivacy1::~CpProxyLinnCoUkPrivacy1()
{
    DestroyService();
    delete iActionGetPolicyVersion;
    delete iActionGetPolicyAgreed;
    delete iActionSetPolicyAgreed;
    delete iActionGetPolicyDetails;
    delete iActionSetPolicyDetails;
}

void CpProxyLinnCoUkPrivacy1::SyncGetPolicyVersion(TUint& aVersion)
{
    SyncGetPolicyVersionLinnCoUkPrivacy1 sync(*this, aVersion);
    BeginGetPolicyVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1::BeginGetPolicyVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1::EndGetPolicyVersion(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkPrivacy1::SyncGetPolicyAgreed(TUint& aVersion)
{
    SyncGetPolicyAgreedLinnCoUkPrivacy1 sync(*this, aVersion);
    BeginGetPolicyAgreed(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1::BeginGetPolicyAgreed(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyAgreed, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyAgreed->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1::EndGetPolicyAgreed(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkPrivacy1::SyncSetPolicyAgreed(TUint aAgreed)
{
    SyncSetPolicyAgreedLinnCoUkPrivacy1 sync(*this);
    BeginSetPolicyAgreed(aAgreed, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1::BeginSetPolicyAgreed(TUint aAgreed, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPolicyAgreed, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPolicyAgreed->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAgreed));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1::EndSetPolicyAgreed(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPolicyAgreed"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkPrivacy1::SyncGetPolicyDetails(Brh& aDetails)
{
    SyncGetPolicyDetailsLinnCoUkPrivacy1 sync(*this, aDetails);
    BeginGetPolicyDetails(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1::BeginGetPolicyDetails(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPolicyDetails, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyDetails->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1::EndGetPolicyDetails(IAsync& aAsync, Brh& aDetails)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDetails);
}

void CpProxyLinnCoUkPrivacy1::SyncSetPolicyDetails(const Brx& aDetails)
{
    SyncSetPolicyDetailsLinnCoUkPrivacy1 sync(*this);
    BeginSetPolicyDetails(aDetails, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1::BeginSetPolicyDetails(const Brx& aDetails, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPolicyDetails, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPolicyDetails->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDetails));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1::EndSetPolicyDetails(IAsync& aAsync)
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

void CpProxyLinnCoUkPrivacy1::SetPropertyPolicyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1::SetPropertyPolicyAgreedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyAgreedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1::SetPropertyPolicyDetailsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPolicyDetailsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkPrivacy1::PropertyPolicyVersion(TUint& aPolicyVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aPolicyVersion = iPolicyVersion->Value();
}

void CpProxyLinnCoUkPrivacy1::PropertyPolicyAgreed(TUint& aPolicyAgreed) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aPolicyAgreed = iPolicyAgreed->Value();
}

void CpProxyLinnCoUkPrivacy1::PropertyPolicyDetails(Brhz& aPolicyDetails) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aPolicyDetails.Set(iPolicyDetails->Value());
}

void CpProxyLinnCoUkPrivacy1::PolicyVersionPropertyChanged()
{
    ReportEvent(iPolicyVersionChanged);
}

void CpProxyLinnCoUkPrivacy1::PolicyAgreedPropertyChanged()
{
    ReportEvent(iPolicyAgreedChanged);
}

void CpProxyLinnCoUkPrivacy1::PolicyDetailsPropertyChanged()
{
    ReportEvent(iPolicyDetailsChanged);
}


void CpProxyLinnCoUkPrivacy1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkPrivacy1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkPrivacy1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkPrivacy1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkPrivacy1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkPrivacy1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkPrivacy1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkPrivacy1::Version() const
{
  return iCpProxy.Version();
}


