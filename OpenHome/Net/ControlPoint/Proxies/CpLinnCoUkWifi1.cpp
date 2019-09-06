#include "CpLinnCoUkWifi1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncClearCredentialsLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncClearCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
};

class SyncGetAdapterInUseLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetAdapterInUseLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, TBool& aAdapterInUse);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    TBool& iAdapterInUse;
};

class SyncGetConfigurationLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetConfigurationLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aConfiguration);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    Brh& iConfiguration;
};

class SyncGetNetworkInfoLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetNetworkInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aNetworkInfo);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    Brh& iNetworkInfo;
};

class SyncGetScanResultsLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetScanResultsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aScanResults);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    Brh& iScanResults;
};

class SyncGetSignalInfoLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetSignalInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aSignalInfo);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    Brh& iSignalInfo;
};

class SyncGetStatusLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncGetStatusLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
    Brh& iStatus;
};

class SyncScanLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncScanLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
};

class SyncSetCredentialsLinnCoUkWifi1 : public SyncProxyAction
{
public:
    SyncSetCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkWifi1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncClearCredentialsLinnCoUkWifi1

SyncClearCredentialsLinnCoUkWifi1::SyncClearCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy)
    : iService(aProxy)
{
}

void SyncClearCredentialsLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearCredentials(aAsync);
}

// SyncGetAdapterInUseLinnCoUkWifi1

SyncGetAdapterInUseLinnCoUkWifi1::SyncGetAdapterInUseLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, TBool& aAdapterInUse)
    : iService(aProxy)
    , iAdapterInUse(aAdapterInUse)
{
}

void SyncGetAdapterInUseLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAdapterInUse(aAsync, iAdapterInUse);
}

// SyncGetConfigurationLinnCoUkWifi1

SyncGetConfigurationLinnCoUkWifi1::SyncGetConfigurationLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aConfiguration)
    : iService(aProxy)
    , iConfiguration(aConfiguration)
{
}

void SyncGetConfigurationLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConfiguration(aAsync, iConfiguration);
}

// SyncGetNetworkInfoLinnCoUkWifi1

SyncGetNetworkInfoLinnCoUkWifi1::SyncGetNetworkInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aNetworkInfo)
    : iService(aProxy)
    , iNetworkInfo(aNetworkInfo)
{
}

void SyncGetNetworkInfoLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetworkInfo(aAsync, iNetworkInfo);
}

// SyncGetScanResultsLinnCoUkWifi1

SyncGetScanResultsLinnCoUkWifi1::SyncGetScanResultsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aScanResults)
    : iService(aProxy)
    , iScanResults(aScanResults)
{
}

void SyncGetScanResultsLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanResults(aAsync, iScanResults);
}

// SyncGetSignalInfoLinnCoUkWifi1

SyncGetSignalInfoLinnCoUkWifi1::SyncGetSignalInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aSignalInfo)
    : iService(aProxy)
    , iSignalInfo(aSignalInfo)
{
}

void SyncGetSignalInfoLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSignalInfo(aAsync, iSignalInfo);
}

// SyncGetStatusLinnCoUkWifi1

SyncGetStatusLinnCoUkWifi1::SyncGetStatusLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy, Brh& aStatus)
    : iService(aProxy)
    , iStatus(aStatus)
{
}

void SyncGetStatusLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetStatus(aAsync, iStatus);
}

// SyncScanLinnCoUkWifi1

SyncScanLinnCoUkWifi1::SyncScanLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy)
    : iService(aProxy)
{
}

void SyncScanLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndScan(aAsync);
}

// SyncSetCredentialsLinnCoUkWifi1

SyncSetCredentialsLinnCoUkWifi1::SyncSetCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1& aProxy)
    : iService(aProxy)
{
}

void SyncSetCredentialsLinnCoUkWifi1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetCredentials(aAsync);
}


// CpProxyLinnCoUkWifi1

CpProxyLinnCoUkWifi1::CpProxyLinnCoUkWifi1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Wifi", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionClearCredentials = new Action("ClearCredentials");

    iActionGetAdapterInUse = new Action("GetAdapterInUse");
    param = new OpenHome::Net::ParameterBool("AdapterInUse");
    iActionGetAdapterInUse->AddOutputParameter(param);

    iActionGetConfiguration = new Action("GetConfiguration");
    param = new OpenHome::Net::ParameterString("Configuration");
    iActionGetConfiguration->AddOutputParameter(param);

    iActionGetNetworkInfo = new Action("GetNetworkInfo");
    param = new OpenHome::Net::ParameterString("NetworkInfo");
    iActionGetNetworkInfo->AddOutputParameter(param);

    iActionGetScanResults = new Action("GetScanResults");
    param = new OpenHome::Net::ParameterString("ScanResults");
    iActionGetScanResults->AddOutputParameter(param);

    iActionGetSignalInfo = new Action("GetSignalInfo");
    param = new OpenHome::Net::ParameterString("SignalInfo");
    iActionGetSignalInfo->AddOutputParameter(param);

    iActionGetStatus = new Action("GetStatus");
    param = new OpenHome::Net::ParameterString("Status");
    iActionGetStatus->AddOutputParameter(param);

    iActionScan = new Action("Scan");

    iActionSetCredentials = new Action("SetCredentials");
    param = new OpenHome::Net::ParameterString("Ssid");
    iActionSetCredentials->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Password");
    iActionSetCredentials->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1::AdapterInUsePropertyChanged);
    iAdapterInUse = new PropertyBool("AdapterInUse", functor);
    AddProperty(iAdapterInUse);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1::ConfigurationPropertyChanged);
    iConfiguration = new PropertyString("Configuration", functor);
    AddProperty(iConfiguration);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1::ScanResultsPropertyChanged);
    iScanResults = new PropertyString("ScanResults", functor);
    AddProperty(iScanResults);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
}

CpProxyLinnCoUkWifi1::~CpProxyLinnCoUkWifi1()
{
    DestroyService();
    delete iActionClearCredentials;
    delete iActionGetAdapterInUse;
    delete iActionGetConfiguration;
    delete iActionGetNetworkInfo;
    delete iActionGetScanResults;
    delete iActionGetSignalInfo;
    delete iActionGetStatus;
    delete iActionScan;
    delete iActionSetCredentials;
}

void CpProxyLinnCoUkWifi1::SyncClearCredentials()
{
    SyncClearCredentialsLinnCoUkWifi1 sync(*this);
    BeginClearCredentials(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginClearCredentials(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearCredentials, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndClearCredentials(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearCredentials"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkWifi1::SyncGetAdapterInUse(TBool& aAdapterInUse)
{
    SyncGetAdapterInUseLinnCoUkWifi1 sync(*this, aAdapterInUse);
    BeginGetAdapterInUse(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetAdapterInUse(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAdapterInUse, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAdapterInUse->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetAdapterInUse(IAsync& aAsync, TBool& aAdapterInUse)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAdapterInUse"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aAdapterInUse = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkWifi1::SyncGetConfiguration(Brh& aConfiguration)
{
    SyncGetConfigurationLinnCoUkWifi1 sync(*this, aConfiguration);
    BeginGetConfiguration(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetConfiguration(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetConfiguration, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConfiguration->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetConfiguration(IAsync& aAsync, Brh& aConfiguration)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetConfiguration"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aConfiguration);
}

void CpProxyLinnCoUkWifi1::SyncGetNetworkInfo(Brh& aNetworkInfo)
{
    SyncGetNetworkInfoLinnCoUkWifi1 sync(*this, aNetworkInfo);
    BeginGetNetworkInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetNetworkInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetNetworkInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetworkInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetNetworkInfo(IAsync& aAsync, Brh& aNetworkInfo)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetNetworkInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNetworkInfo);
}

void CpProxyLinnCoUkWifi1::SyncGetScanResults(Brh& aScanResults)
{
    SyncGetScanResultsLinnCoUkWifi1 sync(*this, aScanResults);
    BeginGetScanResults(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetScanResults(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetScanResults, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanResults->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetScanResults(IAsync& aAsync, Brh& aScanResults)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetScanResults"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aScanResults);
}

void CpProxyLinnCoUkWifi1::SyncGetSignalInfo(Brh& aSignalInfo)
{
    SyncGetSignalInfoLinnCoUkWifi1 sync(*this, aSignalInfo);
    BeginGetSignalInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetSignalInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSignalInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSignalInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetSignalInfo(IAsync& aAsync, Brh& aSignalInfo)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSignalInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSignalInfo);
}

void CpProxyLinnCoUkWifi1::SyncGetStatus(Brh& aStatus)
{
    SyncGetStatusLinnCoUkWifi1 sync(*this, aStatus);
    BeginGetStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginGetStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndGetStatus(IAsync& aAsync, Brh& aStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aStatus);
}

void CpProxyLinnCoUkWifi1::SyncScan()
{
    SyncScanLinnCoUkWifi1 sync(*this);
    BeginScan(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginScan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionScan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndScan(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Scan"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkWifi1::SyncSetCredentials(const Brx& aSsid, const Brx& aPassword)
{
    SyncSetCredentialsLinnCoUkWifi1 sync(*this);
    BeginSetCredentials(aSsid, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1::BeginSetCredentials(const Brx& aSsid, const Brx& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetCredentials, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetCredentials->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSsid));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aPassword));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1::EndSetCredentials(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetCredentials"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkWifi1::SetPropertyAdapterInUseChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAdapterInUseChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1::SetPropertyConfigurationChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConfigurationChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1::SetPropertyScanResultsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iScanResultsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1::PropertyAdapterInUse(TBool& aAdapterInUse) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAdapterInUse = iAdapterInUse->Value();
}

void CpProxyLinnCoUkWifi1::PropertyConfiguration(Brhz& aConfiguration) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConfiguration.Set(iConfiguration->Value());
}

void CpProxyLinnCoUkWifi1::PropertyScanResults(Brhz& aScanResults) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aScanResults.Set(iScanResults->Value());
}

void CpProxyLinnCoUkWifi1::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStatus.Set(iStatus->Value());
}

void CpProxyLinnCoUkWifi1::AdapterInUsePropertyChanged()
{
    ReportEvent(iAdapterInUseChanged);
}

void CpProxyLinnCoUkWifi1::ConfigurationPropertyChanged()
{
    ReportEvent(iConfigurationChanged);
}

void CpProxyLinnCoUkWifi1::ScanResultsPropertyChanged()
{
    ReportEvent(iScanResultsChanged);
}

void CpProxyLinnCoUkWifi1::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}


void CpProxyLinnCoUkWifi1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkWifi1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkWifi1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkWifi1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkWifi1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkWifi1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkWifi1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkWifi1::Version() const
{
  return iCpProxy.Version();
}


