#include "CpLinnCoUkWifi1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyLinnCoUkWifi1C : public CpProxyC
{
public:
    CpProxyLinnCoUkWifi1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkWifi1C();
    //CpProxyLinnCoUkWifi1* Proxy() { return static_cast<CpProxyLinnCoUkWifi1*>(iProxy); }

    void SyncClearCredentials();
    void BeginClearCredentials(FunctorAsync& aFunctor);
    void EndClearCredentials(IAsync& aAsync);

    void SyncGetAdapterInUse(TBool& aAdapterInUse);
    void BeginGetAdapterInUse(FunctorAsync& aFunctor);
    void EndGetAdapterInUse(IAsync& aAsync, TBool& aAdapterInUse);

    void SyncGetConfiguration(Brh& aConfiguration);
    void BeginGetConfiguration(FunctorAsync& aFunctor);
    void EndGetConfiguration(IAsync& aAsync, Brh& aConfiguration);

    void SyncGetNetworkInfo(Brh& aNetworkInfo);
    void BeginGetNetworkInfo(FunctorAsync& aFunctor);
    void EndGetNetworkInfo(IAsync& aAsync, Brh& aNetworkInfo);

    void SyncGetScanResults(Brh& aScanResults);
    void BeginGetScanResults(FunctorAsync& aFunctor);
    void EndGetScanResults(IAsync& aAsync, Brh& aScanResults);

    void SyncGetSignalInfo(Brh& aSignalInfo);
    void BeginGetSignalInfo(FunctorAsync& aFunctor);
    void EndGetSignalInfo(IAsync& aAsync, Brh& aSignalInfo);

    void SyncGetStatus(Brh& aStatus);
    void BeginGetStatus(FunctorAsync& aFunctor);
    void EndGetStatus(IAsync& aAsync, Brh& aStatus);

    void SyncScan();
    void BeginScan(FunctorAsync& aFunctor);
    void EndScan(IAsync& aAsync);

    void SyncSetCredentials(const Brx& aSsid, const Brx& aPassword);
    void BeginSetCredentials(const Brx& aSsid, const Brx& aPassword, FunctorAsync& aFunctor);
    void EndSetCredentials(IAsync& aAsync);

    void SetPropertyAdapterInUseChanged(Functor& aFunctor);
    void SetPropertyConfigurationChanged(Functor& aFunctor);
    void SetPropertyScanResultsChanged(Functor& aFunctor);
    void SetPropertyStatusChanged(Functor& aFunctor);

    void PropertyAdapterInUse(TBool& aAdapterInUse) const;
    void PropertyConfiguration(Brhz& aConfiguration) const;
    void PropertyScanResults(Brhz& aScanResults) const;
    void PropertyStatus(Brhz& aStatus) const;
private:
    void AdapterInUsePropertyChanged();
    void ConfigurationPropertyChanged();
    void ScanResultsPropertyChanged();
    void StatusPropertyChanged();
private:
    Mutex iLock;
    Action* iActionClearCredentials;
    Action* iActionGetAdapterInUse;
    Action* iActionGetConfiguration;
    Action* iActionGetNetworkInfo;
    Action* iActionGetScanResults;
    Action* iActionGetSignalInfo;
    Action* iActionGetStatus;
    Action* iActionScan;
    Action* iActionSetCredentials;
    PropertyBool* iAdapterInUse;
    PropertyString* iConfiguration;
    PropertyString* iScanResults;
    PropertyString* iStatus;
    Functor iAdapterInUseChanged;
    Functor iConfigurationChanged;
    Functor iScanResultsChanged;
    Functor iStatusChanged;
};


class SyncClearCredentialsLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncClearCredentialsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearCredentialsLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
};

SyncClearCredentialsLinnCoUkWifi1C::SyncClearCredentialsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearCredentialsLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearCredentials(aAsync);
}


class SyncGetAdapterInUseLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetAdapterInUseLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, TBool& aAdapterInUse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAdapterInUseLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    TBool& iAdapterInUse;
};

SyncGetAdapterInUseLinnCoUkWifi1C::SyncGetAdapterInUseLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, TBool& aAdapterInUse)
    : iService(aProxy)
    , iAdapterInUse(aAdapterInUse)
{
}

void SyncGetAdapterInUseLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAdapterInUse(aAsync, iAdapterInUse);
}


class SyncGetConfigurationLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetConfigurationLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aConfiguration);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConfigurationLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    Brh& iConfiguration;
};

SyncGetConfigurationLinnCoUkWifi1C::SyncGetConfigurationLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aConfiguration)
    : iService(aProxy)
    , iConfiguration(aConfiguration)
{
}

void SyncGetConfigurationLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConfiguration(aAsync, iConfiguration);
}


class SyncGetNetworkInfoLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetNetworkInfoLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aNetworkInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetNetworkInfoLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    Brh& iNetworkInfo;
};

SyncGetNetworkInfoLinnCoUkWifi1C::SyncGetNetworkInfoLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aNetworkInfo)
    : iService(aProxy)
    , iNetworkInfo(aNetworkInfo)
{
}

void SyncGetNetworkInfoLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetworkInfo(aAsync, iNetworkInfo);
}


class SyncGetScanResultsLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetScanResultsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aScanResults);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetScanResultsLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    Brh& iScanResults;
};

SyncGetScanResultsLinnCoUkWifi1C::SyncGetScanResultsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aScanResults)
    : iService(aProxy)
    , iScanResults(aScanResults)
{
}

void SyncGetScanResultsLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanResults(aAsync, iScanResults);
}


class SyncGetSignalInfoLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetSignalInfoLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aSignalInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSignalInfoLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    Brh& iSignalInfo;
};

SyncGetSignalInfoLinnCoUkWifi1C::SyncGetSignalInfoLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aSignalInfo)
    : iService(aProxy)
    , iSignalInfo(aSignalInfo)
{
}

void SyncGetSignalInfoLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSignalInfo(aAsync, iSignalInfo);
}


class SyncGetStatusLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncGetStatusLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetStatusLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
    Brh& iStatus;
};

SyncGetStatusLinnCoUkWifi1C::SyncGetStatusLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy, Brh& aStatus)
    : iService(aProxy)
    , iStatus(aStatus)
{
}

void SyncGetStatusLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetStatus(aAsync, iStatus);
}


class SyncScanLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncScanLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncScanLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
};

SyncScanLinnCoUkWifi1C::SyncScanLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy)
    : iService(aProxy)
{
}

void SyncScanLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndScan(aAsync);
}


class SyncSetCredentialsLinnCoUkWifi1C : public SyncProxyAction
{
public:
    SyncSetCredentialsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetCredentialsLinnCoUkWifi1C() {};
private:
    CpProxyLinnCoUkWifi1C& iService;
};

SyncSetCredentialsLinnCoUkWifi1C::SyncSetCredentialsLinnCoUkWifi1C(CpProxyLinnCoUkWifi1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetCredentialsLinnCoUkWifi1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetCredentials(aAsync);
}

CpProxyLinnCoUkWifi1C::CpProxyLinnCoUkWifi1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Wifi", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1C::AdapterInUsePropertyChanged);
    iAdapterInUse = new PropertyBool("AdapterInUse", functor);
    AddProperty(iAdapterInUse);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1C::ConfigurationPropertyChanged);
    iConfiguration = new PropertyString("Configuration", functor);
    AddProperty(iConfiguration);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1C::ScanResultsPropertyChanged);
    iScanResults = new PropertyString("ScanResults", functor);
    AddProperty(iScanResults);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkWifi1C::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
}

CpProxyLinnCoUkWifi1C::~CpProxyLinnCoUkWifi1C()
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

void CpProxyLinnCoUkWifi1C::SyncClearCredentials()
{
    SyncClearCredentialsLinnCoUkWifi1C sync(*this);
    BeginClearCredentials(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginClearCredentials(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearCredentials, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndClearCredentials(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1C::SyncGetAdapterInUse(TBool& aAdapterInUse)
{
    SyncGetAdapterInUseLinnCoUkWifi1C sync(*this, aAdapterInUse);
    BeginGetAdapterInUse(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetAdapterInUse(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAdapterInUse, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAdapterInUse->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetAdapterInUse(IAsync& aAsync, TBool& aAdapterInUse)
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

void CpProxyLinnCoUkWifi1C::SyncGetConfiguration(Brh& aConfiguration)
{
    SyncGetConfigurationLinnCoUkWifi1C sync(*this, aConfiguration);
    BeginGetConfiguration(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetConfiguration(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetConfiguration, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConfiguration->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetConfiguration(IAsync& aAsync, Brh& aConfiguration)
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

void CpProxyLinnCoUkWifi1C::SyncGetNetworkInfo(Brh& aNetworkInfo)
{
    SyncGetNetworkInfoLinnCoUkWifi1C sync(*this, aNetworkInfo);
    BeginGetNetworkInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetNetworkInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetNetworkInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetworkInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetNetworkInfo(IAsync& aAsync, Brh& aNetworkInfo)
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

void CpProxyLinnCoUkWifi1C::SyncGetScanResults(Brh& aScanResults)
{
    SyncGetScanResultsLinnCoUkWifi1C sync(*this, aScanResults);
    BeginGetScanResults(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetScanResults(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetScanResults, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanResults->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetScanResults(IAsync& aAsync, Brh& aScanResults)
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

void CpProxyLinnCoUkWifi1C::SyncGetSignalInfo(Brh& aSignalInfo)
{
    SyncGetSignalInfoLinnCoUkWifi1C sync(*this, aSignalInfo);
    BeginGetSignalInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetSignalInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSignalInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSignalInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetSignalInfo(IAsync& aAsync, Brh& aSignalInfo)
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

void CpProxyLinnCoUkWifi1C::SyncGetStatus(Brh& aStatus)
{
    SyncGetStatusLinnCoUkWifi1C sync(*this, aStatus);
    BeginGetStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginGetStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndGetStatus(IAsync& aAsync, Brh& aStatus)
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

void CpProxyLinnCoUkWifi1C::SyncScan()
{
    SyncScanLinnCoUkWifi1C sync(*this);
    BeginScan(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginScan(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionScan, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndScan(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1C::SyncSetCredentials(const Brx& aSsid, const Brx& aPassword)
{
    SyncSetCredentialsLinnCoUkWifi1C sync(*this);
    BeginSetCredentials(aSsid, aPassword, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkWifi1C::BeginSetCredentials(const Brx& aSsid, const Brx& aPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetCredentials, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetCredentials->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSsid));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aPassword));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkWifi1C::EndSetCredentials(IAsync& aAsync)
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

void CpProxyLinnCoUkWifi1C::SetPropertyAdapterInUseChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAdapterInUseChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkWifi1C::SetPropertyConfigurationChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConfigurationChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkWifi1C::SetPropertyScanResultsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iScanResultsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkWifi1C::SetPropertyStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkWifi1C::PropertyAdapterInUse(TBool& aAdapterInUse) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAdapterInUse = iAdapterInUse->Value();
}

void CpProxyLinnCoUkWifi1C::PropertyConfiguration(Brhz& aConfiguration) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aConfiguration.Set(iConfiguration->Value());
}

void CpProxyLinnCoUkWifi1C::PropertyScanResults(Brhz& aScanResults) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aScanResults.Set(iScanResults->Value());
}

void CpProxyLinnCoUkWifi1C::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStatus.Set(iStatus->Value());
}

void CpProxyLinnCoUkWifi1C::AdapterInUsePropertyChanged()
{
    ReportEvent(iAdapterInUseChanged);
}

void CpProxyLinnCoUkWifi1C::ConfigurationPropertyChanged()
{
    ReportEvent(iConfigurationChanged);
}

void CpProxyLinnCoUkWifi1C::ScanResultsPropertyChanged()
{
    ReportEvent(iScanResultsChanged);
}

void CpProxyLinnCoUkWifi1C::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}


THandle STDCALL CpProxyLinnCoUkWifi1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkWifi1C(aDevice);
}

void STDCALL CpProxyLinnCoUkWifi1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncClearCredentials(THandle aHandle)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncClearCredentials();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginClearCredentials(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearCredentials(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndClearCredentials(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearCredentials(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetAdapterInUse(THandle aHandle, uint32_t* aAdapterInUse)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool AdapterInUse;
    int32_t err = 0;
    try {
        proxyC->SyncGetAdapterInUse(AdapterInUse);
        *aAdapterInUse = AdapterInUse? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aAdapterInUse = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetAdapterInUse(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAdapterInUse(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetAdapterInUse(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aAdapterInUse)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool AdapterInUse;
    try {
        proxyC->EndGetAdapterInUse(*async, AdapterInUse);
        *aAdapterInUse = AdapterInUse? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetConfiguration(THandle aHandle, char** aConfiguration)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aConfiguration;
    int32_t err = 0;
    try {
        proxyC->SyncGetConfiguration(buf_aConfiguration);
        *aConfiguration = buf_aConfiguration.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aConfiguration = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetConfiguration(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetConfiguration(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetConfiguration(THandle aHandle, OhNetHandleAsync aAsync, char** aConfiguration)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aConfiguration;
    *aConfiguration = NULL;
    try {
        proxyC->EndGetConfiguration(*async, buf_aConfiguration);
        *aConfiguration = buf_aConfiguration.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetNetworkInfo(THandle aHandle, char** aNetworkInfo)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aNetworkInfo;
    int32_t err = 0;
    try {
        proxyC->SyncGetNetworkInfo(buf_aNetworkInfo);
        *aNetworkInfo = buf_aNetworkInfo.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNetworkInfo = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetNetworkInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetNetworkInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetNetworkInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aNetworkInfo)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNetworkInfo;
    *aNetworkInfo = NULL;
    try {
        proxyC->EndGetNetworkInfo(*async, buf_aNetworkInfo);
        *aNetworkInfo = buf_aNetworkInfo.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetScanResults(THandle aHandle, char** aScanResults)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aScanResults;
    int32_t err = 0;
    try {
        proxyC->SyncGetScanResults(buf_aScanResults);
        *aScanResults = buf_aScanResults.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aScanResults = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetScanResults(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetScanResults(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetScanResults(THandle aHandle, OhNetHandleAsync aAsync, char** aScanResults)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aScanResults;
    *aScanResults = NULL;
    try {
        proxyC->EndGetScanResults(*async, buf_aScanResults);
        *aScanResults = buf_aScanResults.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetSignalInfo(THandle aHandle, char** aSignalInfo)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSignalInfo;
    int32_t err = 0;
    try {
        proxyC->SyncGetSignalInfo(buf_aSignalInfo);
        *aSignalInfo = buf_aSignalInfo.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSignalInfo = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetSignalInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSignalInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetSignalInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aSignalInfo)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSignalInfo;
    *aSignalInfo = NULL;
    try {
        proxyC->EndGetSignalInfo(*async, buf_aSignalInfo);
        *aSignalInfo = buf_aSignalInfo.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncGetStatus(THandle aHandle, char** aStatus)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetStatus(buf_aStatus);
        *aStatus = buf_aStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginGetStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndGetStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aStatus;
    *aStatus = NULL;
    try {
        proxyC->EndGetStatus(*async, buf_aStatus);
        *aStatus = buf_aStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncScan(THandle aHandle)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncScan();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginScan(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginScan(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndScan(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndScan(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkWifi1SyncSetCredentials(THandle aHandle, const char* aSsid, const char* aPassword)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSsid(aSsid);
    Brh buf_aPassword(aPassword);
    int32_t err = 0;
    try {
        proxyC->SyncSetCredentials(buf_aSsid, buf_aPassword);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1BeginSetCredentials(THandle aHandle, const char* aSsid, const char* aPassword, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSsid(aSsid);
    Brh buf_aPassword(aPassword);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetCredentials(buf_aSsid, buf_aPassword, functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1EndSetCredentials(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetCredentials(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkWifi1SetPropertyAdapterInUseChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAdapterInUseChanged(functor);
}

void STDCALL CpProxyLinnCoUkWifi1SetPropertyConfigurationChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConfigurationChanged(functor);
}

void STDCALL CpProxyLinnCoUkWifi1SetPropertyScanResultsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyScanResultsChanged(functor);
}

void STDCALL CpProxyLinnCoUkWifi1SetPropertyStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStatusChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkWifi1PropertyAdapterInUse(THandle aHandle, uint32_t* aAdapterInUse)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool AdapterInUse;
    try {
        proxyC->PropertyAdapterInUse(AdapterInUse);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAdapterInUse = AdapterInUse? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkWifi1PropertyConfiguration(THandle aHandle, char** aConfiguration)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aConfiguration;
    try {
        proxyC->PropertyConfiguration(buf_aConfiguration);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aConfiguration = buf_aConfiguration.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkWifi1PropertyScanResults(THandle aHandle, char** aScanResults)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aScanResults;
    try {
        proxyC->PropertyScanResults(buf_aScanResults);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aScanResults = buf_aScanResults.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkWifi1PropertyStatus(THandle aHandle, char** aStatus)
{
    CpProxyLinnCoUkWifi1C* proxyC = reinterpret_cast<CpProxyLinnCoUkWifi1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aStatus;
    try {
        proxyC->PropertyStatus(buf_aStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aStatus = buf_aStatus.Transfer();
    return 0;
}

