#include "CpAvOpenhomeOrgSender2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPresentationUrlAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncPresentationUrlAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    Brh& iValue;
};

class SyncMetadataAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncMetadataAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    Brh& iValue;
};

class SyncAudioAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncAudioAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    TBool& iValue;
};

class SyncStatusAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncStatusAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    Brh& iValue;
};

class SyncStatus2AvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncStatus2AvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    Brh& iValue;
};

class SyncEnabledAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncEnabledAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    TBool& iValue;
};

class SyncAttributesAvOpenhomeOrgSender2 : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSender2& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPresentationUrlAvOpenhomeOrgSender2

SyncPresentationUrlAvOpenhomeOrgSender2::SyncPresentationUrlAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncPresentationUrlAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndPresentationUrl(aAsync, iValue);
}

// SyncMetadataAvOpenhomeOrgSender2

SyncMetadataAvOpenhomeOrgSender2::SyncMetadataAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMetadataAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndMetadata(aAsync, iValue);
}

// SyncAudioAvOpenhomeOrgSender2

SyncAudioAvOpenhomeOrgSender2::SyncAudioAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAudioAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudio(aAsync, iValue);
}

// SyncStatusAvOpenhomeOrgSender2

SyncStatusAvOpenhomeOrgSender2::SyncStatusAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatusAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus(aAsync, iValue);
}

// SyncStatus2AvOpenhomeOrgSender2

SyncStatus2AvOpenhomeOrgSender2::SyncStatus2AvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatus2AvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus2(aAsync, iValue);
}

// SyncEnabledAvOpenhomeOrgSender2

SyncEnabledAvOpenhomeOrgSender2::SyncEnabledAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncEnabledAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndEnabled(aAsync, iValue);
}

// SyncAttributesAvOpenhomeOrgSender2

SyncAttributesAvOpenhomeOrgSender2::SyncAttributesAvOpenhomeOrgSender2(CpProxyAvOpenhomeOrgSender2& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgSender2::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgSender2

CpProxyAvOpenhomeOrgSender2::CpProxyAvOpenhomeOrgSender2(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::PresentationUrlPropertyChanged);
    iPresentationUrl = new PropertyString("PresentationUrl", functor);
    AddProperty(iPresentationUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::AudioPropertyChanged);
    iAudio = new PropertyBool("Audio", functor);
    AddProperty(iAudio);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::Status2PropertyChanged);
    iStatus2 = new PropertyString("Status2", functor);
    AddProperty(iStatus2);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::EnabledPropertyChanged);
    iEnabled = new PropertyBool("Enabled", functor);
    AddProperty(iEnabled);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgSender2::~CpProxyAvOpenhomeOrgSender2()
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

void CpProxyAvOpenhomeOrgSender2::SyncPresentationUrl(Brh& aValue)
{
    SyncPresentationUrlAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginPresentationUrl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginPresentationUrl(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPresentationUrl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPresentationUrl->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndPresentationUrl(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgSender2::SyncMetadata(Brh& aValue)
{
    SyncMetadataAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMetadata, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMetadata->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndMetadata(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgSender2::SyncAudio(TBool& aValue)
{
    SyncAudioAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginAudio(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginAudio(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudio, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudio->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndAudio(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgSender2::SyncStatus(Brh& aValue)
{
    SyncStatusAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndStatus(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgSender2::SyncStatus2(Brh& aValue)
{
    SyncStatus2AvOpenhomeOrgSender2 sync(*this, aValue);
    BeginStatus2(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginStatus2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStatus2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus2->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndStatus2(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgSender2::SyncEnabled(TBool& aValue)
{
    SyncEnabledAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndEnabled(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgSender2::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgSender2 sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2::EndAttributes(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyPresentationUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPresentationUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyAudioChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyStatus2Changed(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatus2Changed = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyEnabledChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iEnabledChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSender2::PropertyPresentationUrl(Brhz& aPresentationUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPresentationUrl.Set(iPresentationUrl->Value());
}

void CpProxyAvOpenhomeOrgSender2::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgSender2::PropertyAudio(TBool& aAudio) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudio = iAudio->Value();
}

void CpProxyAvOpenhomeOrgSender2::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStatus.Set(iStatus->Value());
}

void CpProxyAvOpenhomeOrgSender2::PropertyStatus2(Brhz& aStatus2) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStatus2.Set(iStatus2->Value());
}

void CpProxyAvOpenhomeOrgSender2::PropertyEnabled(TBool& aEnabled) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aEnabled = iEnabled->Value();
}

void CpProxyAvOpenhomeOrgSender2::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgSender2::PresentationUrlPropertyChanged()
{
    ReportEvent(iPresentationUrlChanged);
}

void CpProxyAvOpenhomeOrgSender2::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgSender2::AudioPropertyChanged()
{
    ReportEvent(iAudioChanged);
}

void CpProxyAvOpenhomeOrgSender2::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgSender2::Status2PropertyChanged()
{
    ReportEvent(iStatus2Changed);
}

void CpProxyAvOpenhomeOrgSender2::EnabledPropertyChanged()
{
    ReportEvent(iEnabledChanged);
}

void CpProxyAvOpenhomeOrgSender2::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


void CpProxyAvOpenhomeOrgSender2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgSender2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgSender2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgSender2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgSender2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgSender2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgSender2::Version() const
{
  return iCpProxy.Version();
}


