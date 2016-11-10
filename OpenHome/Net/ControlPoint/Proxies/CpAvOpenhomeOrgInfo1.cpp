#include "CpAvOpenhomeOrgInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncCountersAvOpenhomeOrgInfo1 : public SyncProxyAction
{
public:
    SyncCountersAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInfo1& iService;
    TUint& iTrackCount;
    TUint& iDetailsCount;
    TUint& iMetatextCount;
};

class SyncTrackAvOpenhomeOrgInfo1 : public SyncProxyAction
{
public:
    SyncTrackAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInfo1& iService;
    Brh& iUri;
    Brh& iMetadata;
};

class SyncDetailsAvOpenhomeOrgInfo1 : public SyncProxyAction
{
public:
    SyncDetailsAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInfo1& iService;
    TUint& iDuration;
    TUint& iBitRate;
    TUint& iBitDepth;
    TUint& iSampleRate;
    TBool& iLossless;
    Brh& iCodecName;
};

class SyncMetatextAvOpenhomeOrgInfo1 : public SyncProxyAction
{
public:
    SyncMetatextAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInfo1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncCountersAvOpenhomeOrgInfo1

SyncCountersAvOpenhomeOrgInfo1::SyncCountersAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount)
    : iService(aProxy)
    , iTrackCount(aTrackCount)
    , iDetailsCount(aDetailsCount)
    , iMetatextCount(aMetatextCount)
{
}

void SyncCountersAvOpenhomeOrgInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndCounters(aAsync, iTrackCount, iDetailsCount, iMetatextCount);
}

// SyncTrackAvOpenhomeOrgInfo1

SyncTrackAvOpenhomeOrgInfo1::SyncTrackAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncTrackAvOpenhomeOrgInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTrack(aAsync, iUri, iMetadata);
}

// SyncDetailsAvOpenhomeOrgInfo1

SyncDetailsAvOpenhomeOrgInfo1::SyncDetailsAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName)
    : iService(aProxy)
    , iDuration(aDuration)
    , iBitRate(aBitRate)
    , iBitDepth(aBitDepth)
    , iSampleRate(aSampleRate)
    , iLossless(aLossless)
    , iCodecName(aCodecName)
{
}

void SyncDetailsAvOpenhomeOrgInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDetails(aAsync, iDuration, iBitRate, iBitDepth, iSampleRate, iLossless, iCodecName);
}

// SyncMetatextAvOpenhomeOrgInfo1

SyncMetatextAvOpenhomeOrgInfo1::SyncMetatextAvOpenhomeOrgInfo1(CpProxyAvOpenhomeOrgInfo1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMetatextAvOpenhomeOrgInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndMetatext(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgInfo1

CpProxyAvOpenhomeOrgInfo1::CpProxyAvOpenhomeOrgInfo1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Info", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionCounters = new Action("Counters");
    param = new OpenHome::Net::ParameterUint("TrackCount");
    iActionCounters->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("DetailsCount");
    iActionCounters->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("MetatextCount");
    iActionCounters->AddOutputParameter(param);

    iActionTrack = new Action("Track");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionTrack->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionTrack->AddOutputParameter(param);

    iActionDetails = new Action("Details");
    param = new OpenHome::Net::ParameterUint("Duration");
    iActionDetails->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("BitRate");
    iActionDetails->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("BitDepth");
    iActionDetails->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("SampleRate");
    iActionDetails->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("Lossless");
    iActionDetails->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("CodecName");
    iActionDetails->AddOutputParameter(param);

    iActionMetatext = new Action("Metatext");
    param = new OpenHome::Net::ParameterString("Value");
    iActionMetatext->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::TrackCountPropertyChanged);
    iTrackCount = new PropertyUint("TrackCount", functor);
    AddProperty(iTrackCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::DetailsCountPropertyChanged);
    iDetailsCount = new PropertyUint("DetailsCount", functor);
    AddProperty(iDetailsCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::MetatextCountPropertyChanged);
    iMetatextCount = new PropertyUint("MetatextCount", functor);
    AddProperty(iMetatextCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::UriPropertyChanged);
    iUri = new PropertyString("Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::DurationPropertyChanged);
    iDuration = new PropertyUint("Duration", functor);
    AddProperty(iDuration);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::BitRatePropertyChanged);
    iBitRate = new PropertyUint("BitRate", functor);
    AddProperty(iBitRate);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::BitDepthPropertyChanged);
    iBitDepth = new PropertyUint("BitDepth", functor);
    AddProperty(iBitDepth);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::SampleRatePropertyChanged);
    iSampleRate = new PropertyUint("SampleRate", functor);
    AddProperty(iSampleRate);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::LosslessPropertyChanged);
    iLossless = new PropertyBool("Lossless", functor);
    AddProperty(iLossless);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::CodecNamePropertyChanged);
    iCodecName = new PropertyString("CodecName", functor);
    AddProperty(iCodecName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInfo1::MetatextPropertyChanged);
    iMetatext = new PropertyString("Metatext", functor);
    AddProperty(iMetatext);
}

CpProxyAvOpenhomeOrgInfo1::~CpProxyAvOpenhomeOrgInfo1()
{
    DestroyService();
    delete iActionCounters;
    delete iActionTrack;
    delete iActionDetails;
    delete iActionMetatext;
}

void CpProxyAvOpenhomeOrgInfo1::SyncCounters(TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount)
{
    SyncCountersAvOpenhomeOrgInfo1 sync(*this, aTrackCount, aDetailsCount, aMetatextCount);
    BeginCounters(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInfo1::BeginCounters(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCounters, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCounters->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInfo1::EndCounters(IAsync& aAsync, TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Counters"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aTrackCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aDetailsCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aMetatextCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgInfo1::SyncTrack(Brh& aUri, Brh& aMetadata)
{
    SyncTrackAvOpenhomeOrgInfo1 sync(*this, aUri, aMetadata);
    BeginTrack(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInfo1::BeginTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTrack, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTrack->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInfo1::EndTrack(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Track"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUri);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgInfo1::SyncDetails(TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName)
{
    SyncDetailsAvOpenhomeOrgInfo1 sync(*this, aDuration, aBitRate, aBitDepth, aSampleRate, aLossless, aCodecName);
    BeginDetails(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInfo1::BeginDetails(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDetails, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDetails->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInfo1::EndDetails(IAsync& aAsync, TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Details"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDuration = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aBitRate = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aBitDepth = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aSampleRate = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aLossless = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCodecName);
}

void CpProxyAvOpenhomeOrgInfo1::SyncMetatext(Brh& aValue)
{
    SyncMetatextAvOpenhomeOrgInfo1 sync(*this, aValue);
    BeginMetatext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInfo1::BeginMetatext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMetatext, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMetatext->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInfo1::EndMetatext(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Metatext"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyTrackCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTrackCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyDetailsCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDetailsCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyMetatextCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetatextCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyDurationChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDurationChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyBitRateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBitRateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyBitDepthChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBitDepthChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertySampleRateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSampleRateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyLosslessChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iLosslessChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyCodecNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCodecNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyMetatextChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetatextChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyTrackCount(TUint& aTrackCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTrackCount = iTrackCount->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyDetailsCount(TUint& aDetailsCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDetailsCount = iDetailsCount->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyMetatextCount(TUint& aMetatextCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetatextCount = iMetatextCount->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyUri(Brhz& aUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUri.Set(iUri->Value());
}

void CpProxyAvOpenhomeOrgInfo1::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgInfo1::PropertyDuration(TUint& aDuration) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDuration = iDuration->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyBitRate(TUint& aBitRate) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBitRate = iBitRate->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyBitDepth(TUint& aBitDepth) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBitDepth = iBitDepth->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertySampleRate(TUint& aSampleRate) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSampleRate = iSampleRate->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyLossless(TBool& aLossless) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aLossless = iLossless->Value();
}

void CpProxyAvOpenhomeOrgInfo1::PropertyCodecName(Brhz& aCodecName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCodecName.Set(iCodecName->Value());
}

void CpProxyAvOpenhomeOrgInfo1::PropertyMetatext(Brhz& aMetatext) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetatext.Set(iMetatext->Value());
}

void CpProxyAvOpenhomeOrgInfo1::TrackCountPropertyChanged()
{
    ReportEvent(iTrackCountChanged);
}

void CpProxyAvOpenhomeOrgInfo1::DetailsCountPropertyChanged()
{
    ReportEvent(iDetailsCountChanged);
}

void CpProxyAvOpenhomeOrgInfo1::MetatextCountPropertyChanged()
{
    ReportEvent(iMetatextCountChanged);
}

void CpProxyAvOpenhomeOrgInfo1::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgInfo1::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgInfo1::DurationPropertyChanged()
{
    ReportEvent(iDurationChanged);
}

void CpProxyAvOpenhomeOrgInfo1::BitRatePropertyChanged()
{
    ReportEvent(iBitRateChanged);
}

void CpProxyAvOpenhomeOrgInfo1::BitDepthPropertyChanged()
{
    ReportEvent(iBitDepthChanged);
}

void CpProxyAvOpenhomeOrgInfo1::SampleRatePropertyChanged()
{
    ReportEvent(iSampleRateChanged);
}

void CpProxyAvOpenhomeOrgInfo1::LosslessPropertyChanged()
{
    ReportEvent(iLosslessChanged);
}

void CpProxyAvOpenhomeOrgInfo1::CodecNamePropertyChanged()
{
    ReportEvent(iCodecNameChanged);
}

void CpProxyAvOpenhomeOrgInfo1::MetatextPropertyChanged()
{
    ReportEvent(iMetatextChanged);
}


void CpProxyAvOpenhomeOrgInfo1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgInfo1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgInfo1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgInfo1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgInfo1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgInfo1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgInfo1::Version() const
{
  return iCpProxy.Version();
}


