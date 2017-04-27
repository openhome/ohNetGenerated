#include "CpAvOpenhomeOrgSender2.h"
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

class CpProxyAvOpenhomeOrgSender2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgSender2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgSender2C();
    //CpProxyAvOpenhomeOrgSender2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgSender2*>(iProxy); }

    void SyncPresentationUrl(Brh& aValue);
    void BeginPresentationUrl(FunctorAsync& aFunctor);
    void EndPresentationUrl(IAsync& aAsync, Brh& aValue);

    void SyncMetadata(Brh& aValue);
    void BeginMetadata(FunctorAsync& aFunctor);
    void EndMetadata(IAsync& aAsync, Brh& aValue);

    void SyncAudio(TBool& aValue);
    void BeginAudio(FunctorAsync& aFunctor);
    void EndAudio(IAsync& aAsync, TBool& aValue);

    void SyncStatus(Brh& aValue);
    void BeginStatus(FunctorAsync& aFunctor);
    void EndStatus(IAsync& aAsync, Brh& aValue);

    void SyncStatus2(Brh& aValue);
    void BeginStatus2(FunctorAsync& aFunctor);
    void EndStatus2(IAsync& aAsync, Brh& aValue);

    void SyncEnabled(TBool& aValue);
    void BeginEnabled(FunctorAsync& aFunctor);
    void EndEnabled(IAsync& aAsync, TBool& aValue);

    void SyncAttributes(Brh& aValue);
    void BeginAttributes(FunctorAsync& aFunctor);
    void EndAttributes(IAsync& aAsync, Brh& aValue);

    void SetPropertyPresentationUrlChanged(Functor& aFunctor);
    void SetPropertyMetadataChanged(Functor& aFunctor);
    void SetPropertyAudioChanged(Functor& aFunctor);
    void SetPropertyStatusChanged(Functor& aFunctor);
    void SetPropertyStatus2Changed(Functor& aFunctor);
    void SetPropertyEnabledChanged(Functor& aFunctor);
    void SetPropertyAttributesChanged(Functor& aFunctor);

    void PropertyPresentationUrl(Brhz& aPresentationUrl) const;
    void PropertyMetadata(Brhz& aMetadata) const;
    void PropertyAudio(TBool& aAudio) const;
    void PropertyStatus(Brhz& aStatus) const;
    void PropertyStatus2(Brhz& aStatus2) const;
    void PropertyEnabled(TBool& aEnabled) const;
    void PropertyAttributes(Brhz& aAttributes) const;
private:
    void PresentationUrlPropertyChanged();
    void MetadataPropertyChanged();
    void AudioPropertyChanged();
    void StatusPropertyChanged();
    void Status2PropertyChanged();
    void EnabledPropertyChanged();
    void AttributesPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPresentationUrl;
    Action* iActionMetadata;
    Action* iActionAudio;
    Action* iActionStatus;
    Action* iActionStatus2;
    Action* iActionEnabled;
    Action* iActionAttributes;
    PropertyString* iPresentationUrl;
    PropertyString* iMetadata;
    PropertyBool* iAudio;
    PropertyString* iStatus;
    PropertyString* iStatus2;
    PropertyBool* iEnabled;
    PropertyString* iAttributes;
    Functor iPresentationUrlChanged;
    Functor iMetadataChanged;
    Functor iAudioChanged;
    Functor iStatusChanged;
    Functor iStatus2Changed;
    Functor iEnabledChanged;
    Functor iAttributesChanged;
};


class SyncPresentationUrlAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncPresentationUrlAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPresentationUrlAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    Brh& iValue;
};

SyncPresentationUrlAvOpenhomeOrgSender2C::SyncPresentationUrlAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncPresentationUrlAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPresentationUrl(aAsync, iValue);
}


class SyncMetadataAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncMetadataAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMetadataAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    Brh& iValue;
};

SyncMetadataAvOpenhomeOrgSender2C::SyncMetadataAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMetadataAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMetadata(aAsync, iValue);
}


class SyncAudioAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncAudioAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    TBool& iValue;
};

SyncAudioAvOpenhomeOrgSender2C::SyncAudioAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAudioAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudio(aAsync, iValue);
}


class SyncStatusAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncStatusAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStatusAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    Brh& iValue;
};

SyncStatusAvOpenhomeOrgSender2C::SyncStatusAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatusAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus(aAsync, iValue);
}


class SyncStatus2AvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncStatus2AvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStatus2AvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    Brh& iValue;
};

SyncStatus2AvOpenhomeOrgSender2C::SyncStatus2AvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStatus2AvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStatus2(aAsync, iValue);
}


class SyncEnabledAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncEnabledAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEnabledAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    TBool& iValue;
};

SyncEnabledAvOpenhomeOrgSender2C::SyncEnabledAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncEnabledAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndEnabled(aAsync, iValue);
}


class SyncAttributesAvOpenhomeOrgSender2C : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgSender2C() {};
private:
    CpProxyAvOpenhomeOrgSender2C& iService;
    Brh& iValue;
};

SyncAttributesAvOpenhomeOrgSender2C::SyncAttributesAvOpenhomeOrgSender2C(CpProxyAvOpenhomeOrgSender2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgSender2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}

CpProxyAvOpenhomeOrgSender2C::CpProxyAvOpenhomeOrgSender2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Sender", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::PresentationUrlPropertyChanged);
    iPresentationUrl = new PropertyString("PresentationUrl", functor);
    AddProperty(iPresentationUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::AudioPropertyChanged);
    iAudio = new PropertyBool("Audio", functor);
    AddProperty(iAudio);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::Status2PropertyChanged);
    iStatus2 = new PropertyString("Status2", functor);
    AddProperty(iStatus2);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::EnabledPropertyChanged);
    iEnabled = new PropertyBool("Enabled", functor);
    AddProperty(iEnabled);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSender2C::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgSender2C::~CpProxyAvOpenhomeOrgSender2C()
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

void CpProxyAvOpenhomeOrgSender2C::SyncPresentationUrl(Brh& aValue)
{
    SyncPresentationUrlAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginPresentationUrl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginPresentationUrl(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPresentationUrl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPresentationUrl->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndPresentationUrl(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncMetadata(Brh& aValue)
{
    SyncMetadataAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMetadata, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMetadata->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndMetadata(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncAudio(TBool& aValue)
{
    SyncAudioAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginAudio(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginAudio(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAudio, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudio->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndAudio(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncStatus(Brh& aValue)
{
    SyncStatusAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndStatus(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncStatus2(Brh& aValue)
{
    SyncStatus2AvOpenhomeOrgSender2C sync(*this, aValue);
    BeginStatus2(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginStatus2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStatus2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStatus2->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndStatus2(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncEnabled(TBool& aValue)
{
    SyncEnabledAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndEnabled(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgSender2C sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSender2C::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSender2C::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSender2C::SetPropertyPresentationUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPresentationUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMetadataChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyAudioChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyStatus2Changed(Functor& aFunctor)
{
    iLock.Wait();
    iStatus2Changed = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyEnabledChanged(Functor& aFunctor)
{
    iLock.Wait();
    iEnabledChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAttributesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSender2C::PropertyPresentationUrl(Brhz& aPresentationUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPresentationUrl.Set(iPresentationUrl->Value());
}

void CpProxyAvOpenhomeOrgSender2C::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgSender2C::PropertyAudio(TBool& aAudio) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudio = iAudio->Value();
}

void CpProxyAvOpenhomeOrgSender2C::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStatus.Set(iStatus->Value());
}

void CpProxyAvOpenhomeOrgSender2C::PropertyStatus2(Brhz& aStatus2) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStatus2.Set(iStatus2->Value());
}

void CpProxyAvOpenhomeOrgSender2C::PropertyEnabled(TBool& aEnabled) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aEnabled = iEnabled->Value();
}

void CpProxyAvOpenhomeOrgSender2C::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgSender2C::PresentationUrlPropertyChanged()
{
    ReportEvent(iPresentationUrlChanged);
}

void CpProxyAvOpenhomeOrgSender2C::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgSender2C::AudioPropertyChanged()
{
    ReportEvent(iAudioChanged);
}

void CpProxyAvOpenhomeOrgSender2C::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgSender2C::Status2PropertyChanged()
{
    ReportEvent(iStatus2Changed);
}

void CpProxyAvOpenhomeOrgSender2C::EnabledPropertyChanged()
{
    ReportEvent(iEnabledChanged);
}

void CpProxyAvOpenhomeOrgSender2C::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgSender2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgSender2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgSender2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncPresentationUrl(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncPresentationUrl(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginPresentationUrl(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPresentationUrl(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndPresentationUrl(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndPresentationUrl(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncMetadata(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncMetadata(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginMetadata(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMetadata(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndMetadata(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndMetadata(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncAudio(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncAudio(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginAudio(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAudio(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndAudio(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndAudio(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncStatus(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncStatus(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndStatus(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncStatus2(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncStatus2(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginStatus2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStatus2(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndStatus2(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndStatus2(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncEnabled(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncEnabled(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginEnabled(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginEnabled(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndEnabled(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndEnabled(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2SyncAttributes(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncAttributes(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2BeginAttributes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAttributes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2EndAttributes(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndAttributes(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyPresentationUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPresentationUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyMetadataChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMetadataChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyAudioChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyStatus2Changed(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStatus2Changed(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyEnabledChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyEnabledChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgSender2SetPropertyAttributesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAttributesChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyPresentationUrl(THandle aHandle, char** aPresentationUrl)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPresentationUrl;
    try {
        proxyC->PropertyPresentationUrl(buf_aPresentationUrl);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPresentationUrl = buf_aPresentationUrl.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyMetadata(THandle aHandle, char** aMetadata)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMetadata;
    try {
        proxyC->PropertyMetadata(buf_aMetadata);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMetadata = buf_aMetadata.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyAudio(THandle aHandle, uint32_t* aAudio)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Audio;
    try {
        proxyC->PropertyAudio(Audio);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAudio = Audio? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyStatus(THandle aHandle, char** aStatus)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyStatus2(THandle aHandle, char** aStatus2)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aStatus2;
    try {
        proxyC->PropertyStatus2(buf_aStatus2);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aStatus2 = buf_aStatus2.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyEnabled(THandle aHandle, uint32_t* aEnabled)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Enabled;
    try {
        proxyC->PropertyEnabled(Enabled);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aEnabled = Enabled? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSender2PropertyAttributes(THandle aHandle, char** aAttributes)
{
    CpProxyAvOpenhomeOrgSender2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSender2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAttributes;
    try {
        proxyC->PropertyAttributes(buf_aAttributes);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAttributes = buf_aAttributes.Transfer();
    return 0;
}

