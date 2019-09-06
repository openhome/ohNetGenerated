#include "CpLinnCoUkWifi1.h"
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


class SyncClearCredentialsLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncClearCredentialsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearCredentialsLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
};

SyncClearCredentialsLinnCoUkWifi1Cpp::SyncClearCredentialsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearCredentialsLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearCredentials(aAsync);
}


class SyncGetAdapterInUseLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetAdapterInUseLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, bool& aAdapterInUse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAdapterInUseLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    bool& iAdapterInUse;
};

SyncGetAdapterInUseLinnCoUkWifi1Cpp::SyncGetAdapterInUseLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, bool& aAdapterInUse)
    : iService(aProxy)
    , iAdapterInUse(aAdapterInUse)
{
}

void SyncGetAdapterInUseLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAdapterInUse(aAsync, iAdapterInUse);
}


class SyncGetConfigurationLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetConfigurationLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aConfiguration);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConfigurationLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    std::string& iConfiguration;
};

SyncGetConfigurationLinnCoUkWifi1Cpp::SyncGetConfigurationLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aConfiguration)
    : iService(aProxy)
    , iConfiguration(aConfiguration)
{
}

void SyncGetConfigurationLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConfiguration(aAsync, iConfiguration);
}


class SyncGetNetworkInfoLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetNetworkInfoLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aNetworkInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetNetworkInfoLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    std::string& iNetworkInfo;
};

SyncGetNetworkInfoLinnCoUkWifi1Cpp::SyncGetNetworkInfoLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aNetworkInfo)
    : iService(aProxy)
    , iNetworkInfo(aNetworkInfo)
{
}

void SyncGetNetworkInfoLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetworkInfo(aAsync, iNetworkInfo);
}


class SyncGetScanResultsLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetScanResultsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aScanResults);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetScanResultsLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    std::string& iScanResults;
};

SyncGetScanResultsLinnCoUkWifi1Cpp::SyncGetScanResultsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aScanResults)
    : iService(aProxy)
    , iScanResults(aScanResults)
{
}

void SyncGetScanResultsLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanResults(aAsync, iScanResults);
}


class SyncGetSignalInfoLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetSignalInfoLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aSignalInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSignalInfoLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    std::string& iSignalInfo;
};

SyncGetSignalInfoLinnCoUkWifi1Cpp::SyncGetSignalInfoLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aSignalInfo)
    : iService(aProxy)
    , iSignalInfo(aSignalInfo)
{
}

void SyncGetSignalInfoLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSignalInfo(aAsync, iSignalInfo);
}


class SyncGetStatusLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncGetStatusLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetStatusLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
    std::string& iStatus;
};

SyncGetStatusLinnCoUkWifi1Cpp::SyncGetStatusLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy, std::string& aStatus)
    : iService(aProxy)
    , iStatus(aStatus)
{
}

void SyncGetStatusLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetStatus(aAsync, iStatus);
}


class SyncScanLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncScanLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncScanLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
};

SyncScanLinnCoUkWifi1Cpp::SyncScanLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncScanLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndScan(aAsync);
}


class SyncSetCredentialsLinnCoUkWifi1Cpp : public SyncProxyAction
{
public:
    SyncSetCredentialsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetCredentialsLinnCoUkWifi1Cpp() {}
private:
    CpProxyLinnCoUkWifi1Cpp& iService;
};

SyncSetCredentialsLinnCoUkWifi1Cpp::SyncSetCredentialsLinnCoUkWifi1Cpp(CpProxyLinnCoUkWifi1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetCredentialsLinnCoUkWifi1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetCredentials(aAsync);
}


CpProxyLinnCoUkWifi1Cpp::CpProxyLinnCoUkWifi1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1Cpp::AdapterInUsePropertyChanged);
    iAdapterInUse = new PropertyBool("AdapterInUse", functor);
    AddProperty(iAdapterInUse);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1Cpp::ConfigurationPropertyChanged);
    iConfiguration = new PropertyString("Configuration", functor);
    AddProperty(iConfiguration);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1Cpp::ScanResultsPropertyChanged);
    iScanResults = new PropertyString("ScanResults", functor);
    AddProperty(iScanResults);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1Cpp::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
}

CpProxyLinnCoUkWifi1Cpp::~CpProxyLinnCoUkWifi1Cpp()
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

void CpProxyLinnCoUkWifi1Cpp::SyncClearCredentials()
{
    SyncClearCredentialsLinnCoUkWifi1Cpp sync(*this);
    BeginClearCredentials(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginClearCredentials(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearCredentials, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndClearCredentials(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1Cpp::SyncGetAdapterInUse(bool& aAdapterInUse)
{
    SyncGetAdapterInUseLinnCoUkWifi1Cpp sync(*this, aAdapterInUse);
    BeginGetAdapterInUse(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetAdapterInUse(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAdapterInUse, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAdapterInUse->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetAdapterInUse(IAsync& aAsync, bool& aAdapterInUse)
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

void CpProxyLinnCoUkWifi1Cpp::SyncGetConfiguration(std::string& aConfiguration)
{
    SyncGetConfigurationLinnCoUkWifi1Cpp sync(*this, aConfiguration);
    BeginGetConfiguration(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetConfiguration(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetConfiguration, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConfiguration->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetConfiguration(IAsync& aAsync, std::string& aConfiguration)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aConfiguration.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkWifi1Cpp::SyncGetNetworkInfo(std::string& aNetworkInfo)
{
    SyncGetNetworkInfoLinnCoUkWifi1Cpp sync(*this, aNetworkInfo);
    BeginGetNetworkInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetNetworkInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetNetworkInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetworkInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetNetworkInfo(IAsync& aAsync, std::string& aNetworkInfo)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNetworkInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkWifi1Cpp::SyncGetScanResults(std::string& aScanResults)
{
    SyncGetScanResultsLinnCoUkWifi1Cpp sync(*this, aScanResults);
    BeginGetScanResults(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetScanResults(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetScanResults, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanResults->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetScanResults(IAsync& aAsync, std::string& aScanResults)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aScanResults.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkWifi1Cpp::SyncGetSignalInfo(std::string& aSignalInfo)
{
    SyncGetSignalInfoLinnCoUkWifi1Cpp sync(*this, aSignalInfo);
    BeginGetSignalInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetSignalInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSignalInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSignalInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetSignalInfo(IAsync& aAsync, std::string& aSignalInfo)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSignalInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkWifi1Cpp::SyncGetStatus(std::string& aStatus)
{
    SyncGetStatusLinnCoUkWifi1Cpp sync(*this, aStatus);
    BeginGetStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginGetStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndGetStatus(IAsync& aAsync, std::string& aStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkWifi1Cpp::SyncScan()
{
    SyncScanLinnCoUkWifi1Cpp sync(*this);
    BeginScan(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginScan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionScan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndScan(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1Cpp::SyncSetCredentials(const std::string& aSsid, const std::string& aPassword)
{
    SyncSetCredentialsLinnCoUkWifi1Cpp sync(*this);
    BeginSetCredentials(aSsid, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1Cpp::BeginSetCredentials(const std::string& aSsid, const std::string& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetCredentials, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetCredentials->InputParameters();
    {
        Brn buf((const TByte*)aSsid.c_str(), (TUint)aSsid.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aPassword.c_str(), (TUint)aPassword.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1Cpp::EndSetCredentials(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1Cpp::SetPropertyAdapterInUseChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAdapterInUseChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1Cpp::SetPropertyConfigurationChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConfigurationChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1Cpp::SetPropertyScanResultsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iScanResultsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1Cpp::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkWifi1Cpp::PropertyAdapterInUse(bool& aAdapterInUse) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAdapterInUse = iAdapterInUse->Value();
}

void CpProxyLinnCoUkWifi1Cpp::PropertyConfiguration(std::string& aConfiguration) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iConfiguration->Value();
    aConfiguration.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkWifi1Cpp::PropertyScanResults(std::string& aScanResults) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iScanResults->Value();
    aScanResults.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkWifi1Cpp::PropertyStatus(std::string& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iStatus->Value();
    aStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkWifi1Cpp::AdapterInUsePropertyChanged()
{
    ReportEvent(iAdapterInUseChanged);
}

void CpProxyLinnCoUkWifi1Cpp::ConfigurationPropertyChanged()
{
    ReportEvent(iConfigurationChanged);
}

void CpProxyLinnCoUkWifi1Cpp::ScanResultsPropertyChanged()
{
    ReportEvent(iScanResultsChanged);
}

void CpProxyLinnCoUkWifi1Cpp::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyLinnCoUkWifi1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkWifi1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkWifi1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkWifi1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkWifi1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkWifi1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkWifi1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkWifi1Cpp::Version() const
{
  return iCpProxy.Version();
}

