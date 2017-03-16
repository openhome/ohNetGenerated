#include "CpLinnCoUkExaktInputs1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetAssociationLinnCoUkExaktInputs1 : public SyncProxyAction
{
public:
    SyncGetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy, Brh& aDeviceId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExaktInputs1& iService;
    Brh& iDeviceId;
};

class SyncSetAssociationLinnCoUkExaktInputs1 : public SyncProxyAction
{
public:
    SyncSetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExaktInputs1& iService;
};

class SyncClearAssociationLinnCoUkExaktInputs1 : public SyncProxyAction
{
public:
    SyncClearAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExaktInputs1& iService;
};

class SyncInputCountLinnCoUkExaktInputs1 : public SyncProxyAction
{
public:
    SyncInputCountLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy, TUint& aInputCount);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExaktInputs1& iService;
    TUint& iInputCount;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetAssociationLinnCoUkExaktInputs1

SyncGetAssociationLinnCoUkExaktInputs1::SyncGetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy, Brh& aDeviceId)
    : iService(aProxy)
    , iDeviceId(aDeviceId)
{
}

void SyncGetAssociationLinnCoUkExaktInputs1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAssociation(aAsync, iDeviceId);
}

// SyncSetAssociationLinnCoUkExaktInputs1

SyncSetAssociationLinnCoUkExaktInputs1::SyncSetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociationLinnCoUkExaktInputs1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociation(aAsync);
}

// SyncClearAssociationLinnCoUkExaktInputs1

SyncClearAssociationLinnCoUkExaktInputs1::SyncClearAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy)
    : iService(aProxy)
{
}

void SyncClearAssociationLinnCoUkExaktInputs1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAssociation(aAsync);
}

// SyncInputCountLinnCoUkExaktInputs1

SyncInputCountLinnCoUkExaktInputs1::SyncInputCountLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1& aProxy, TUint& aInputCount)
    : iService(aProxy)
    , iInputCount(aInputCount)
{
}

void SyncInputCountLinnCoUkExaktInputs1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInputCount(aAsync, iInputCount);
}


// CpProxyLinnCoUkExaktInputs1

CpProxyLinnCoUkExaktInputs1::CpProxyLinnCoUkExaktInputs1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "ExaktInputs", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetAssociation = new Action("GetAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionGetAssociation->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionGetAssociation->AddOutputParameter(param);

    iActionSetAssociation = new Action("SetAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionSetAssociation->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionSetAssociation->AddInputParameter(param);

    iActionClearAssociation = new Action("ClearAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionClearAssociation->AddInputParameter(param);

    iActionInputCount = new Action("InputCount");
    param = new OpenHome::Net::ParameterUint("InputCount");
    iActionInputCount->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExaktInputs1::AssociationsPropertyChanged);
    iAssociations = new PropertyString("Associations", functor);
    AddProperty(iAssociations);
}

CpProxyLinnCoUkExaktInputs1::~CpProxyLinnCoUkExaktInputs1()
{
    DestroyService();
    delete iActionGetAssociation;
    delete iActionSetAssociation;
    delete iActionClearAssociation;
    delete iActionInputCount;
}

void CpProxyLinnCoUkExaktInputs1::SyncGetAssociation(TUint aInputIndex, Brh& aDeviceId)
{
    SyncGetAssociationLinnCoUkExaktInputs1 sync(*this, aDeviceId);
    BeginGetAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1::BeginGetAssociation(TUint aInputIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAssociation->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1::EndGetAssociation(IAsync& aAsync, Brh& aDeviceId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDeviceId);
}

void CpProxyLinnCoUkExaktInputs1::SyncSetAssociation(TUint aInputIndex, const Brx& aDeviceId)
{
    SyncSetAssociationLinnCoUkExaktInputs1 sync(*this);
    BeginSetAssociation(aInputIndex, aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1::BeginSetAssociation(TUint aInputIndex, const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1::EndSetAssociation(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExaktInputs1::SyncClearAssociation(TUint aInputIndex)
{
    SyncClearAssociationLinnCoUkExaktInputs1 sync(*this);
    BeginClearAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1::BeginClearAssociation(TUint aInputIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1::EndClearAssociation(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExaktInputs1::SyncInputCount(TUint& aInputCount)
{
    SyncInputCountLinnCoUkExaktInputs1 sync(*this, aInputCount);
    BeginInputCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1::BeginInputCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInputCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInputCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1::EndInputCount(IAsync& aAsync, TUint& aInputCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InputCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aInputCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExaktInputs1::SetPropertyAssociationsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExaktInputs1::PropertyAssociations(Brhz& aAssociations) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAssociations.Set(iAssociations->Value());
}

void CpProxyLinnCoUkExaktInputs1::AssociationsPropertyChanged()
{
    ReportEvent(iAssociationsChanged);
}


void CpProxyLinnCoUkExaktInputs1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExaktInputs1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExaktInputs1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExaktInputs1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExaktInputs1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExaktInputs1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExaktInputs1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExaktInputs1::Version() const
{
  return iCpProxy.Version();
}


