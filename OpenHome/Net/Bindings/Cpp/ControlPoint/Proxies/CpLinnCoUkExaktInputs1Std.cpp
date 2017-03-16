#include "CpLinnCoUkExaktInputs1.h"
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


class SyncGetAssociationLinnCoUkExaktInputs1Cpp : public SyncProxyAction
{
public:
    SyncGetAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy, std::string& aDeviceId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAssociationLinnCoUkExaktInputs1Cpp() {}
private:
    CpProxyLinnCoUkExaktInputs1Cpp& iService;
    std::string& iDeviceId;
};

SyncGetAssociationLinnCoUkExaktInputs1Cpp::SyncGetAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy, std::string& aDeviceId)
    : iService(aProxy)
    , iDeviceId(aDeviceId)
{
}

void SyncGetAssociationLinnCoUkExaktInputs1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAssociation(aAsync, iDeviceId);
}


class SyncSetAssociationLinnCoUkExaktInputs1Cpp : public SyncProxyAction
{
public:
    SyncSetAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociationLinnCoUkExaktInputs1Cpp() {}
private:
    CpProxyLinnCoUkExaktInputs1Cpp& iService;
};

SyncSetAssociationLinnCoUkExaktInputs1Cpp::SyncSetAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociationLinnCoUkExaktInputs1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociation(aAsync);
}


class SyncClearAssociationLinnCoUkExaktInputs1Cpp : public SyncProxyAction
{
public:
    SyncClearAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAssociationLinnCoUkExaktInputs1Cpp() {}
private:
    CpProxyLinnCoUkExaktInputs1Cpp& iService;
};

SyncClearAssociationLinnCoUkExaktInputs1Cpp::SyncClearAssociationLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearAssociationLinnCoUkExaktInputs1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAssociation(aAsync);
}


class SyncInputCountLinnCoUkExaktInputs1Cpp : public SyncProxyAction
{
public:
    SyncInputCountLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy, uint32_t& aInputCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInputCountLinnCoUkExaktInputs1Cpp() {}
private:
    CpProxyLinnCoUkExaktInputs1Cpp& iService;
    uint32_t& iInputCount;
};

SyncInputCountLinnCoUkExaktInputs1Cpp::SyncInputCountLinnCoUkExaktInputs1Cpp(CpProxyLinnCoUkExaktInputs1Cpp& aProxy, uint32_t& aInputCount)
    : iService(aProxy)
    , iInputCount(aInputCount)
{
}

void SyncInputCountLinnCoUkExaktInputs1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInputCount(aAsync, iInputCount);
}


CpProxyLinnCoUkExaktInputs1Cpp::CpProxyLinnCoUkExaktInputs1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExaktInputs1Cpp::AssociationsPropertyChanged);
    iAssociations = new PropertyString("Associations", functor);
    AddProperty(iAssociations);
}

CpProxyLinnCoUkExaktInputs1Cpp::~CpProxyLinnCoUkExaktInputs1Cpp()
{
    DestroyService();
    delete iActionGetAssociation;
    delete iActionSetAssociation;
    delete iActionClearAssociation;
    delete iActionInputCount;
}

void CpProxyLinnCoUkExaktInputs1Cpp::SyncGetAssociation(uint32_t aInputIndex, std::string& aDeviceId)
{
    SyncGetAssociationLinnCoUkExaktInputs1Cpp sync(*this, aDeviceId);
    BeginGetAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1Cpp::BeginGetAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExaktInputs1Cpp::EndGetAssociation(IAsync& aAsync, std::string& aDeviceId)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDeviceId.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExaktInputs1Cpp::SyncSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId)
{
    SyncSetAssociationLinnCoUkExaktInputs1Cpp sync(*this);
    BeginSetAssociation(aInputIndex, aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1Cpp::BeginSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1Cpp::EndSetAssociation(IAsync& aAsync)
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

void CpProxyLinnCoUkExaktInputs1Cpp::SyncClearAssociation(uint32_t aInputIndex)
{
    SyncClearAssociationLinnCoUkExaktInputs1Cpp sync(*this);
    BeginClearAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1Cpp::BeginClearAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1Cpp::EndClearAssociation(IAsync& aAsync)
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

void CpProxyLinnCoUkExaktInputs1Cpp::SyncInputCount(uint32_t& aInputCount)
{
    SyncInputCountLinnCoUkExaktInputs1Cpp sync(*this, aInputCount);
    BeginInputCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1Cpp::BeginInputCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInputCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInputCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1Cpp::EndInputCount(IAsync& aAsync, uint32_t& aInputCount)
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

void CpProxyLinnCoUkExaktInputs1Cpp::SetPropertyAssociationsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExaktInputs1Cpp::PropertyAssociations(std::string& aAssociations) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAssociations->Value();
    aAssociations.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExaktInputs1Cpp::AssociationsPropertyChanged()
{
    ReportEvent(iAssociationsChanged);
}

void CpProxyLinnCoUkExaktInputs1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExaktInputs1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExaktInputs1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExaktInputs1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExaktInputs1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExaktInputs1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExaktInputs1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExaktInputs1Cpp::Version() const
{
  return iCpProxy.Version();
}

