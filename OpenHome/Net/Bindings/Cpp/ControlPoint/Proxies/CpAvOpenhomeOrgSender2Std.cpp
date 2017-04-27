#include "CpAvOpenhomeOrgSender2.h"
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


class SyncPresentationUrlAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncPresentationUrlAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPresentationUrlAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    std::string& iValue;
};

SyncPresentationUrlAvOpenhomeOrgSender2Cpp::SyncPresentationUrlAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncPresentationUrlAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPresentationUrl(aAsync, iValue);
}


class SyncMetadataAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncMetadataAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMetadataAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    std::string& iValue;
};

SyncMetadataAvOpenhomeOrgSender2Cpp::SyncMetadataAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMetadataAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMetadata(aAsync, iValue);
}


class SyncAudioAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncAudioAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    bool& iValue;
};

SyncAudioAvOpenhomeOrgSender2Cpp::SyncAudioAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAudioAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudio(aAsync, iValue);
}


class SyncStatusAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncStatusAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStatusAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    std::string& iValue;
};

SyncStatusAvOpenhomeOrgSender2Cpp::SyncStatusAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatusAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus(aAsync, iValue);
}


class SyncStatus2AvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncStatus2AvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStatus2AvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    std::string& iValue;
};

SyncStatus2AvOpenhomeOrgSender2Cpp::SyncStatus2AvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatus2AvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus2(aAsync, iValue);
}


class SyncEnabledAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncEnabledAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEnabledAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    bool& iValue;
};

SyncEnabledAvOpenhomeOrgSender2Cpp::SyncEnabledAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncEnabledAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndEnabled(aAsync, iValue);
}


class SyncAttributesAvOpenhomeOrgSender2Cpp : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgSender2Cpp() {}
private:
    CpProxyAvOpenhomeOrgSender2Cpp& iService;
    std::string& iValue;
};

SyncAttributesAvOpenhomeOrgSender2Cpp::SyncAttributesAvOpenhomeOrgSender2Cpp(CpProxyAvOpenhomeOrgSender2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgSender2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


CpProxyAvOpenhomeOrgSender2Cpp::CpProxyAvOpenhomeOrgSender2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Sender", 2, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPresentationUrl = new Action("PresentationUrl");
    param = new OpenHome::Net::ParameterString("Value");
    iActionPresentationUrl->AddOutputParameter(param);

    iActionMetadata = new Action("Metadata");
    param = new OpenHome::Net::ParameterString("Value");
    iActionMetadata->AddOutputParameter(param);

    iActionAudio = new Action("Audio");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionAudio->AddOutputParameter(param);

    iActionStatus = new Action("Status");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Enabled";
    allowedValues[index++] = (TChar*)"Disabled";
    allowedValues[index++] = (TChar*)"Blocked";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 3);
    iActionStatus->AddOutputParameter(param);
    delete[] allowedValues;

    iActionStatus2 = new Action("Status2");
    index = 0;
    allowedValues = new TChar*[5];
    allowedValues[index++] = (TChar*)"Sending";
    allowedValues[index++] = (TChar*)"Ready";
    allowedValues[index++] = (TChar*)"Blocked";
    allowedValues[index++] = (TChar*)"Inactive";
    allowedValues[index++] = (TChar*)"Disabled";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 5);
    iActionStatus2->AddOutputParameter(param);
    delete[] allowedValues;

    iActionEnabled = new Action("Enabled");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionEnabled->AddOutputParameter(param);

    iActionAttributes = new Action("Attributes");
    param = new OpenHome::Net::ParameterString("Value");
    iActionAttributes->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::PresentationUrlPropertyChanged);
    iPresentationUrl = new PropertyString("PresentationUrl", functor);
    AddProperty(iPresentationUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::AudioPropertyChanged);
    iAudio = new PropertyBool("Audio", functor);
    AddProperty(iAudio);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::Status2PropertyChanged);
    iStatus2 = new PropertyString("Status2", functor);
    AddProperty(iStatus2);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::EnabledPropertyChanged);
    iEnabled = new PropertyBool("Enabled", functor);
    AddProperty(iEnabled);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2Cpp::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgSender2Cpp::~CpProxyAvOpenhomeOrgSender2Cpp()
{
    DestroyService();
    delete iActionPresentationUrl;
    delete iActionMetadata;
    delete iActionAudio;
    delete iActionStatus;
    delete iActionStatus2;
    delete iActionEnabled;
    delete iActionAttributes;
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncPresentationUrl(std::string& aValue)
{
    SyncPresentationUrlAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginPresentationUrl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginPresentationUrl(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPresentationUrl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPresentationUrl->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndPresentationUrl(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PresentationUrl"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncMetadata(std::string& aValue)
{
    SyncMetadataAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMetadata, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMetadata->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndMetadata(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Metadata"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncAudio(bool& aValue)
{
    SyncAudioAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginAudio(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginAudio(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudio, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudio->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndAudio(IAsync& aAsync, bool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Audio"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncStatus(std::string& aValue)
{
    SyncStatusAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndStatus(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Status"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncStatus2(std::string& aValue)
{
    SyncStatus2AvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginStatus2(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginStatus2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStatus2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus2->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndStatus2(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Status2"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncEnabled(bool& aValue)
{
    SyncEnabledAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndEnabled(IAsync& aAsync, bool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Enabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SyncAttributes(std::string& aValue)
{
    SyncAttributesAvOpenhomeOrgSender2Cpp sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2Cpp::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EndAttributes(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Attributes"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyPresentationUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPresentationUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyAudioChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyStatus2Changed(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatus2Changed = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyEnabledChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iEnabledChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyPresentationUrl(std::string& aPresentationUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPresentationUrl->Value();
    aPresentationUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyMetadata(std::string& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMetadata->Value();
    aMetadata.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyAudio(bool& aAudio) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudio = iAudio->Value();
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyStatus(std::string& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iStatus->Value();
    aStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyStatus2(std::string& aStatus2) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iStatus2->Value();
    aStatus2.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyEnabled(bool& aEnabled) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aEnabled = iEnabled->Value();
}

void CpProxyAvOpenhomeOrgSender2Cpp::PropertyAttributes(std::string& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAttributes->Value();
    aAttributes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgSender2Cpp::PresentationUrlPropertyChanged()
{
    ReportEvent(iPresentationUrlChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::AudioPropertyChanged()
{
    ReportEvent(iAudioChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::Status2PropertyChanged()
{
    ReportEvent(iStatus2Changed);
}

void CpProxyAvOpenhomeOrgSender2Cpp::EnabledPropertyChanged()
{
    ReportEvent(iEnabledChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgSender2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgSender2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgSender2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgSender2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgSender2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgSender2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgSender2Cpp::Version() const
{
  return iCpProxy.Version();
}

