#include "CpLinnCoUkConfiguration1.h"
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


class SyncConfigurationXmlLinnCoUkConfiguration1Cpp : public SyncProxyAction
{
public:
    SyncConfigurationXmlLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy, std::string& aaConfigurationXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConfigurationXmlLinnCoUkConfiguration1Cpp() {}
private:
    CpProxyLinnCoUkConfiguration1Cpp& iService;
    std::string& iaConfigurationXml;
};

SyncConfigurationXmlLinnCoUkConfiguration1Cpp::SyncConfigurationXmlLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy, std::string& aaConfigurationXml)
    : iService(aProxy)
    , iaConfigurationXml(aaConfigurationXml)
{
}

void SyncConfigurationXmlLinnCoUkConfiguration1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndConfigurationXml(aAsync, iaConfigurationXml);
}


class SyncParameterXmlLinnCoUkConfiguration1Cpp : public SyncProxyAction
{
public:
    SyncParameterXmlLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy, std::string& aaParameterXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncParameterXmlLinnCoUkConfiguration1Cpp() {}
private:
    CpProxyLinnCoUkConfiguration1Cpp& iService;
    std::string& iaParameterXml;
};

SyncParameterXmlLinnCoUkConfiguration1Cpp::SyncParameterXmlLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy, std::string& aaParameterXml)
    : iService(aProxy)
    , iaParameterXml(aaParameterXml)
{
}

void SyncParameterXmlLinnCoUkConfiguration1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndParameterXml(aAsync, iaParameterXml);
}


class SyncSetParameterLinnCoUkConfiguration1Cpp : public SyncProxyAction
{
public:
    SyncSetParameterLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetParameterLinnCoUkConfiguration1Cpp() {}
private:
    CpProxyLinnCoUkConfiguration1Cpp& iService;
};

SyncSetParameterLinnCoUkConfiguration1Cpp::SyncSetParameterLinnCoUkConfiguration1Cpp(CpProxyLinnCoUkConfiguration1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetParameterLinnCoUkConfiguration1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetParameter(aAsync);
}


CpProxyLinnCoUkConfiguration1Cpp::CpProxyLinnCoUkConfiguration1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Configuration", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionConfigurationXml = new Action("ConfigurationXml");
    param = new OpenHome::Net::ParameterString("aConfigurationXml");
    iActionConfigurationXml->AddOutputParameter(param);

    iActionParameterXml = new Action("ParameterXml");
    param = new OpenHome::Net::ParameterString("aParameterXml");
    iActionParameterXml->AddOutputParameter(param);

    iActionSetParameter = new Action("SetParameter");
    param = new OpenHome::Net::ParameterString("aTarget");
    iActionSetParameter->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aName");
    iActionSetParameter->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aValue");
    iActionSetParameter->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkConfiguration1Cpp::ConfigurationXmlPropertyChanged);
    iConfigurationXml = new PropertyString("ConfigurationXml", functor);
    AddProperty(iConfigurationXml);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkConfiguration1Cpp::ParameterXmlPropertyChanged);
    iParameterXml = new PropertyString("ParameterXml", functor);
    AddProperty(iParameterXml);
}

CpProxyLinnCoUkConfiguration1Cpp::~CpProxyLinnCoUkConfiguration1Cpp()
{
    DestroyService();
    delete iActionConfigurationXml;
    delete iActionParameterXml;
    delete iActionSetParameter;
}

void CpProxyLinnCoUkConfiguration1Cpp::SyncConfigurationXml(std::string& aaConfigurationXml)
{
    SyncConfigurationXmlLinnCoUkConfiguration1Cpp sync(*this, aaConfigurationXml);
    BeginConfigurationXml(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1Cpp::BeginConfigurationXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConfigurationXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConfigurationXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1Cpp::EndConfigurationXml(IAsync& aAsync, std::string& aaConfigurationXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ConfigurationXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaConfigurationXml.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkConfiguration1Cpp::SyncParameterXml(std::string& aaParameterXml)
{
    SyncParameterXmlLinnCoUkConfiguration1Cpp sync(*this, aaParameterXml);
    BeginParameterXml(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1Cpp::BeginParameterXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionParameterXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionParameterXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1Cpp::EndParameterXml(IAsync& aAsync, std::string& aaParameterXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ParameterXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaParameterXml.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkConfiguration1Cpp::SyncSetParameter(const std::string& aaTarget, const std::string& aaName, const std::string& aaValue)
{
    SyncSetParameterLinnCoUkConfiguration1Cpp sync(*this);
    BeginSetParameter(aaTarget, aaName, aaValue, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1Cpp::BeginSetParameter(const std::string& aaTarget, const std::string& aaName, const std::string& aaValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetParameter, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetParameter->InputParameters();
    {
        Brn buf((const TByte*)aaTarget.c_str(), (TUint)aaTarget.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aaName.c_str(), (TUint)aaName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aaValue.c_str(), (TUint)aaValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1Cpp::EndSetParameter(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetParameter"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkConfiguration1Cpp::SetPropertyConfigurationXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConfigurationXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkConfiguration1Cpp::SetPropertyParameterXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iParameterXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkConfiguration1Cpp::PropertyConfigurationXml(std::string& aConfigurationXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iConfigurationXml->Value();
    aConfigurationXml.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkConfiguration1Cpp::PropertyParameterXml(std::string& aParameterXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iParameterXml->Value();
    aParameterXml.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkConfiguration1Cpp::ConfigurationXmlPropertyChanged()
{
    ReportEvent(iConfigurationXmlChanged);
}

void CpProxyLinnCoUkConfiguration1Cpp::ParameterXmlPropertyChanged()
{
    ReportEvent(iParameterXmlChanged);
}

void CpProxyLinnCoUkConfiguration1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkConfiguration1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkConfiguration1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkConfiguration1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkConfiguration1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkConfiguration1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkConfiguration1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkConfiguration1Cpp::Version() const
{
  return iCpProxy.Version();
}

