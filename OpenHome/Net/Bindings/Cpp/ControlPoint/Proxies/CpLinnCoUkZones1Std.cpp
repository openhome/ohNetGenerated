#include "CpLinnCoUkZones1.h"
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


class SyncGetInputsLinnCoUkZones1Cpp : public SyncProxyAction
{
public:
    SyncGetInputsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aInputs);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetInputsLinnCoUkZones1Cpp() {}
private:
    CpProxyLinnCoUkZones1Cpp& iService;
    std::string& iInputs;
};

SyncGetInputsLinnCoUkZones1Cpp::SyncGetInputsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aInputs)
    : iService(aProxy)
    , iInputs(aInputs)
{
}

void SyncGetInputsLinnCoUkZones1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInputs(aAsync, iInputs);
}


class SyncGetOutputsLinnCoUkZones1Cpp : public SyncProxyAction
{
public:
    SyncGetOutputsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aOutputs);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetOutputsLinnCoUkZones1Cpp() {}
private:
    CpProxyLinnCoUkZones1Cpp& iService;
    std::string& iOutputs;
};

SyncGetOutputsLinnCoUkZones1Cpp::SyncGetOutputsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aOutputs)
    : iService(aProxy)
    , iOutputs(aOutputs)
{
}

void SyncGetOutputsLinnCoUkZones1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutputs(aAsync, iOutputs);
}


class SyncGetMappingsLinnCoUkZones1Cpp : public SyncProxyAction
{
public:
    SyncGetMappingsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aMappings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMappingsLinnCoUkZones1Cpp() {}
private:
    CpProxyLinnCoUkZones1Cpp& iService;
    std::string& iMappings;
};

SyncGetMappingsLinnCoUkZones1Cpp::SyncGetMappingsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy, std::string& aMappings)
    : iService(aProxy)
    , iMappings(aMappings)
{
}

void SyncGetMappingsLinnCoUkZones1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMappings(aAsync, iMappings);
}


class SyncSetMappingsLinnCoUkZones1Cpp : public SyncProxyAction
{
public:
    SyncSetMappingsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMappingsLinnCoUkZones1Cpp() {}
private:
    CpProxyLinnCoUkZones1Cpp& iService;
};

SyncSetMappingsLinnCoUkZones1Cpp::SyncSetMappingsLinnCoUkZones1Cpp(CpProxyLinnCoUkZones1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetMappingsLinnCoUkZones1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMappings(aAsync);
}


CpProxyLinnCoUkZones1Cpp::CpProxyLinnCoUkZones1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Zones", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetInputs = new Action("GetInputs");
    param = new OpenHome::Net::ParameterString("Inputs");
    iActionGetInputs->AddOutputParameter(param);

    iActionGetOutputs = new Action("GetOutputs");
    param = new OpenHome::Net::ParameterString("Outputs");
    iActionGetOutputs->AddOutputParameter(param);

    iActionGetMappings = new Action("GetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionGetMappings->AddOutputParameter(param);

    iActionSetMappings = new Action("SetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionSetMappings->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1Cpp::InputsPropertyChanged);
    iInputs = new PropertyString("Inputs", functor);
    AddProperty(iInputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1Cpp::OutputsPropertyChanged);
    iOutputs = new PropertyString("Outputs", functor);
    AddProperty(iOutputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1Cpp::MappingsPropertyChanged);
    iMappings = new PropertyString("Mappings", functor);
    AddProperty(iMappings);
}

CpProxyLinnCoUkZones1Cpp::~CpProxyLinnCoUkZones1Cpp()
{
    DestroyService();
    delete iActionGetInputs;
    delete iActionGetOutputs;
    delete iActionGetMappings;
    delete iActionSetMappings;
}

void CpProxyLinnCoUkZones1Cpp::SyncGetInputs(std::string& aInputs)
{
    SyncGetInputsLinnCoUkZones1Cpp sync(*this, aInputs);
    BeginGetInputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1Cpp::BeginGetInputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetInputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1Cpp::EndGetInputs(IAsync& aAsync, std::string& aInputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetInputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInputs.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkZones1Cpp::SyncGetOutputs(std::string& aOutputs)
{
    SyncGetOutputsLinnCoUkZones1Cpp sync(*this, aOutputs);
    BeginGetOutputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1Cpp::BeginGetOutputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetOutputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1Cpp::EndGetOutputs(IAsync& aAsync, std::string& aOutputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetOutputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aOutputs.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkZones1Cpp::SyncGetMappings(std::string& aMappings)
{
    SyncGetMappingsLinnCoUkZones1Cpp sync(*this, aMappings);
    BeginGetMappings(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1Cpp::BeginGetMappings(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMappings, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMappings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1Cpp::EndGetMappings(IAsync& aAsync, std::string& aMappings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMappings.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkZones1Cpp::SyncSetMappings(const std::string& aMappings)
{
    SyncSetMappingsLinnCoUkZones1Cpp sync(*this);
    BeginSetMappings(aMappings, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1Cpp::BeginSetMappings(const std::string& aMappings, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMappings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMappings->InputParameters();
    {
        Brn buf((const TByte*)aMappings.c_str(), (TUint)aMappings.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1Cpp::EndSetMappings(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkZones1Cpp::SetPropertyInputsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInputsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1Cpp::SetPropertyOutputsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iOutputsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1Cpp::SetPropertyMappingsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMappingsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1Cpp::PropertyInputs(std::string& aInputs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iInputs->Value();
    aInputs.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkZones1Cpp::PropertyOutputs(std::string& aOutputs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iOutputs->Value();
    aOutputs.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkZones1Cpp::PropertyMappings(std::string& aMappings) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMappings->Value();
    aMappings.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkZones1Cpp::InputsPropertyChanged()
{
    ReportEvent(iInputsChanged);
}

void CpProxyLinnCoUkZones1Cpp::OutputsPropertyChanged()
{
    ReportEvent(iOutputsChanged);
}

void CpProxyLinnCoUkZones1Cpp::MappingsPropertyChanged()
{
    ReportEvent(iMappingsChanged);
}

void CpProxyLinnCoUkZones1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkZones1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkZones1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkZones1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkZones1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkZones1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkZones1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkZones1Cpp::Version() const
{
  return iCpProxy.Version();
}

