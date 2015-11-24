#include "CpLinnCoUkFlash1.h"
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

class CpProxyLinnCoUkFlash1C : public CpProxyC
{
public:
    CpProxyLinnCoUkFlash1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkFlash1C();
    //CpProxyLinnCoUkFlash1* Proxy() { return static_cast<CpProxyLinnCoUkFlash1*>(iProxy); }

    void SyncRead(TUint aaId, TUint aaAddress, TUint aaLength, Brh& aaBuffer);
    void BeginRead(TUint aaId, TUint aaAddress, TUint aaLength, FunctorAsync& aFunctor);
    void EndRead(IAsync& aAsync, Brh& aaBuffer);

    void SyncWrite(TUint aaId, TUint aaAddress, const Brx& aaSource);
    void BeginWrite(TUint aaId, TUint aaAddress, const Brx& aaSource, FunctorAsync& aFunctor);
    void EndWrite(IAsync& aAsync);

    void SyncErase(TUint aaId, TUint aaAddress);
    void BeginErase(TUint aaId, TUint aaAddress, FunctorAsync& aFunctor);
    void EndErase(IAsync& aAsync);

    void SyncEraseSector(TUint aaId, TUint aaSector);
    void BeginEraseSector(TUint aaId, TUint aaSector, FunctorAsync& aFunctor);
    void EndEraseSector(IAsync& aAsync);

    void SyncEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector);
    void BeginEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector, FunctorAsync& aFunctor);
    void EndEraseSectors(IAsync& aAsync);

    void SyncEraseChip(TUint aaId);
    void BeginEraseChip(TUint aaId, FunctorAsync& aFunctor);
    void EndEraseChip(IAsync& aAsync);

    void SyncSectors(TUint aaId, TUint& aaSectors);
    void BeginSectors(TUint aaId, FunctorAsync& aFunctor);
    void EndSectors(IAsync& aAsync, TUint& aaSectors);

    void SyncSectorBytes(TUint aaId, TUint& aaBytes);
    void BeginSectorBytes(TUint aaId, FunctorAsync& aFunctor);
    void EndSectorBytes(IAsync& aAsync, TUint& aaBytes);

    void SyncRomDirInfo(TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);
    void BeginRomDirInfo(FunctorAsync& aFunctor);
    void EndRomDirInfo(IAsync& aAsync, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);


private:
private:
    Mutex iLock;
    Action* iActionRead;
    Action* iActionWrite;
    Action* iActionErase;
    Action* iActionEraseSector;
    Action* iActionEraseSectors;
    Action* iActionEraseChip;
    Action* iActionSectors;
    Action* iActionSectorBytes;
    Action* iActionRomDirInfo;
};


class SyncReadLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncReadLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, Brh& aaBuffer);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
    Brh& iaBuffer;
};

SyncReadLinnCoUkFlash1C::SyncReadLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, Brh& aaBuffer)
    : iService(aProxy)
    , iaBuffer(aaBuffer)
{
}

void SyncReadLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iaBuffer);
}


class SyncWriteLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncWriteLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncWriteLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
};

SyncWriteLinnCoUkFlash1C::SyncWriteLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy)
    : iService(aProxy)
{
}

void SyncWriteLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndWrite(aAsync);
}


class SyncEraseLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncEraseLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
};

SyncEraseLinnCoUkFlash1C::SyncEraseLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy)
    : iService(aProxy)
{
}

void SyncEraseLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndErase(aAsync);
}


class SyncEraseSectorLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncEraseSectorLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
};

SyncEraseSectorLinnCoUkFlash1C::SyncEraseSectorLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSector(aAsync);
}


class SyncEraseSectorsLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncEraseSectorsLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorsLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
};

SyncEraseSectorsLinnCoUkFlash1C::SyncEraseSectorsLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorsLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSectors(aAsync);
}


class SyncEraseChipLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncEraseChipLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseChipLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
};

SyncEraseChipLinnCoUkFlash1C::SyncEraseChipLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy)
    : iService(aProxy)
{
}

void SyncEraseChipLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseChip(aAsync);
}


class SyncSectorsLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncSectorsLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaSectors);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorsLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
    TUint& iaSectors;
};

SyncSectorsLinnCoUkFlash1C::SyncSectorsLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaSectors)
    : iService(aProxy)
    , iaSectors(aaSectors)
{
}

void SyncSectorsLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectors(aAsync, iaSectors);
}


class SyncSectorBytesLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncSectorBytesLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaBytes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorBytesLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
    TUint& iaBytes;
};

SyncSectorBytesLinnCoUkFlash1C::SyncSectorBytesLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaBytes)
    : iService(aProxy)
    , iaBytes(aaBytes)
{
}

void SyncSectorBytesLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectorBytes(aAsync, iaBytes);
}


class SyncRomDirInfoLinnCoUkFlash1C : public SyncProxyAction
{
public:
    SyncRomDirInfoLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRomDirInfoLinnCoUkFlash1C() {};
private:
    CpProxyLinnCoUkFlash1C& iService;
    TUint& iaFlashIdMain;
    TUint& iaOffsetMain;
    TUint& iaBytesMain;
    TUint& iaFlashIdFallback;
    TUint& iaOffsetFallback;
    TUint& iaBytesFallback;
};

SyncRomDirInfoLinnCoUkFlash1C::SyncRomDirInfoLinnCoUkFlash1C(CpProxyLinnCoUkFlash1C& aProxy, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
    : iService(aProxy)
    , iaFlashIdMain(aaFlashIdMain)
    , iaOffsetMain(aaOffsetMain)
    , iaBytesMain(aaBytesMain)
    , iaFlashIdFallback(aaFlashIdFallback)
    , iaOffsetFallback(aaOffsetFallback)
    , iaBytesFallback(aaBytesFallback)
{
}

void SyncRomDirInfoLinnCoUkFlash1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRomDirInfo(aAsync, iaFlashIdMain, iaOffsetMain, iaBytesMain, iaFlashIdFallback, iaOffsetFallback, iaBytesFallback);
}

CpProxyLinnCoUkFlash1C::CpProxyLinnCoUkFlash1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Flash", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionRead = new Action("Read");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aAddress");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aLength");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("aBuffer");
    iActionRead->AddOutputParameter(param);

    iActionWrite = new Action("Write");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionWrite->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aAddress");
    iActionWrite->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("aSource");
    iActionWrite->AddInputParameter(param);

    iActionErase = new Action("Erase");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionErase->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aAddress");
    iActionErase->AddInputParameter(param);

    iActionEraseSector = new Action("EraseSector");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionEraseSector->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aSector");
    iActionEraseSector->AddInputParameter(param);

    iActionEraseSectors = new Action("EraseSectors");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionEraseSectors->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aFirstSector");
    iActionEraseSectors->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aLastSector");
    iActionEraseSectors->AddInputParameter(param);

    iActionEraseChip = new Action("EraseChip");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionEraseChip->AddInputParameter(param);

    iActionSectors = new Action("Sectors");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionSectors->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aSectors");
    iActionSectors->AddOutputParameter(param);

    iActionSectorBytes = new Action("SectorBytes");
    param = new OpenHome::Net::ParameterUint("aId");
    iActionSectorBytes->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("aBytes");
    iActionSectorBytes->AddOutputParameter(param);

    iActionRomDirInfo = new Action("RomDirInfo");
    param = new OpenHome::Net::ParameterUint("aFlashIdMain");
    iActionRomDirInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("aOffsetMain");
    iActionRomDirInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("aBytesMain");
    iActionRomDirInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("aFlashIdFallback");
    iActionRomDirInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("aOffsetFallback");
    iActionRomDirInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("aBytesFallback");
    iActionRomDirInfo->AddOutputParameter(param);
}

CpProxyLinnCoUkFlash1C::~CpProxyLinnCoUkFlash1C()
{
    DestroyService();
    delete iActionRead;
    delete iActionWrite;
    delete iActionErase;
    delete iActionEraseSector;
    delete iActionEraseSectors;
    delete iActionEraseChip;
    delete iActionSectors;
    delete iActionSectorBytes;
    delete iActionRomDirInfo;
}

void CpProxyLinnCoUkFlash1C::SyncRead(TUint aaId, TUint aaAddress, TUint aaLength, Brh& aaBuffer)
{
    SyncReadLinnCoUkFlash1C sync(*this, aaBuffer);
    BeginRead(aaId, aaAddress, aaLength, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginRead(TUint aaId, TUint aaAddress, TUint aaLength, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaLength));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndRead(IAsync& aAsync, Brh& aaBuffer)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Read"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aaBuffer);
}

void CpProxyLinnCoUkFlash1C::SyncWrite(TUint aaId, TUint aaAddress, const Brx& aaSource)
{
    SyncWriteLinnCoUkFlash1C sync(*this);
    BeginWrite(aaId, aaAddress, aaSource, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginWrite(TUint aaId, TUint aaAddress, const Brx& aaSource, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionWrite, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionWrite->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aaSource));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndWrite(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Write"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkFlash1C::SyncErase(TUint aaId, TUint aaAddress)
{
    SyncEraseLinnCoUkFlash1C sync(*this);
    BeginErase(aaId, aaAddress, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginErase(TUint aaId, TUint aaAddress, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionErase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionErase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndErase(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Erase"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkFlash1C::SyncEraseSector(TUint aaId, TUint aaSector)
{
    SyncEraseSectorLinnCoUkFlash1C sync(*this);
    BeginEraseSector(aaId, aaSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginEraseSector(TUint aaId, TUint aaSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionEraseSector, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSector->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaSector));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndEraseSector(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("EraseSector"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkFlash1C::SyncEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector)
{
    SyncEraseSectorsLinnCoUkFlash1C sync(*this);
    BeginEraseSectors(aaId, aaFirstSector, aaLastSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionEraseSectors, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSectors->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaFirstSector));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaLastSector));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndEraseSectors(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("EraseSectors"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkFlash1C::SyncEraseChip(TUint aaId)
{
    SyncEraseChipLinnCoUkFlash1C sync(*this);
    BeginEraseChip(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginEraseChip(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionEraseChip, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseChip->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndEraseChip(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("EraseChip"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkFlash1C::SyncSectors(TUint aaId, TUint& aaSectors)
{
    SyncSectorsLinnCoUkFlash1C sync(*this, aaSectors);
    BeginSectors(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginSectors(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSectors, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSectors->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSectors->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndSectors(IAsync& aAsync, TUint& aaSectors)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Sectors"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aaSectors = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkFlash1C::SyncSectorBytes(TUint aaId, TUint& aaBytes)
{
    SyncSectorBytesLinnCoUkFlash1C sync(*this, aaBytes);
    BeginSectorBytes(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginSectorBytes(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSectorBytes, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSectorBytes->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSectorBytes->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndSectorBytes(IAsync& aAsync, TUint& aaBytes)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SectorBytes"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aaBytes = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkFlash1C::SyncRomDirInfo(TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
{
    SyncRomDirInfoLinnCoUkFlash1C sync(*this, aaFlashIdMain, aaOffsetMain, aaBytesMain, aaFlashIdFallback, aaOffsetFallback, aaBytesFallback);
    BeginRomDirInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1C::BeginRomDirInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRomDirInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRomDirInfo->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1C::EndRomDirInfo(IAsync& aAsync, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RomDirInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aaFlashIdMain = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aaOffsetMain = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aaBytesMain = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aaFlashIdFallback = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aaOffsetFallback = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aaBytesFallback = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}


THandle STDCALL CpProxyLinnCoUkFlash1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkFlash1C(aDevice);
}

void STDCALL CpProxyLinnCoUkFlash1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncRead(THandle aHandle, uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, char** aaBuffer, uint32_t* aaBufferLen)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaBuffer;
    int32_t err = 0;
    try {
        proxyC->SyncRead(aaId, aaAddress, aaLength, buf_aaBuffer);
        *aaBufferLen = buf_aaBuffer.Bytes();
        *aaBuffer = buf_aaBuffer.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaBufferLen = 0;
        *aaBuffer = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginRead(THandle aHandle, uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRead(aaId, aaAddress, aaLength, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndRead(THandle aHandle, OhNetHandleAsync aAsync, char** aaBuffer, uint32_t* aaBufferLen)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaBuffer;
    *aaBuffer = NULL;
    *aaBufferLen = 0;
    try {
        proxyC->EndRead(*async, buf_aaBuffer);
        *aaBufferLen = buf_aaBuffer.Bytes();
        *aaBuffer = buf_aaBuffer.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncWrite(THandle aHandle, uint32_t aaId, uint32_t aaAddress, const char* aaSource, uint32_t aaSourceLen)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaSource;
    buf_aaSource.Set((const TByte*)aaSource, aaSourceLen);
    int32_t err = 0;
    try {
        proxyC->SyncWrite(aaId, aaAddress, buf_aaSource);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginWrite(THandle aHandle, uint32_t aaId, uint32_t aaAddress, const char* aaSource, uint32_t aaSourceLen, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaSource;
    buf_aaSource.Set((const TByte*)aaSource, aaSourceLen);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginWrite(aaId, aaAddress, buf_aaSource, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndWrite(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndWrite(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncErase(THandle aHandle, uint32_t aaId, uint32_t aaAddress)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncErase(aaId, aaAddress);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginErase(THandle aHandle, uint32_t aaId, uint32_t aaAddress, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginErase(aaId, aaAddress, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndErase(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndErase(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncEraseSector(THandle aHandle, uint32_t aaId, uint32_t aaSector)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncEraseSector(aaId, aaSector);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginEraseSector(THandle aHandle, uint32_t aaId, uint32_t aaSector, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginEraseSector(aaId, aaSector, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndEraseSector(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndEraseSector(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncEraseSectors(THandle aHandle, uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncEraseSectors(aaId, aaFirstSector, aaLastSector);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginEraseSectors(THandle aHandle, uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginEraseSectors(aaId, aaFirstSector, aaLastSector, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndEraseSectors(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndEraseSectors(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncEraseChip(THandle aHandle, uint32_t aaId)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncEraseChip(aaId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginEraseChip(THandle aHandle, uint32_t aaId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginEraseChip(aaId, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndEraseChip(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndEraseChip(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncSectors(THandle aHandle, uint32_t aaId, uint32_t* aaSectors)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSectors(aaId, *aaSectors);
    }
    catch (ProxyError& ) {
        err = -1;
        *aaSectors = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginSectors(THandle aHandle, uint32_t aaId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSectors(aaId, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndSectors(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaSectors)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSectors(*async, *aaSectors);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncSectorBytes(THandle aHandle, uint32_t aaId, uint32_t* aaBytes)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSectorBytes(aaId, *aaBytes);
    }
    catch (ProxyError& ) {
        err = -1;
        *aaBytes = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginSectorBytes(THandle aHandle, uint32_t aaId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSectorBytes(aaId, functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndSectorBytes(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaBytes)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSectorBytes(*async, *aaBytes);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkFlash1SyncRomDirInfo(THandle aHandle, uint32_t* aaFlashIdMain, uint32_t* aaOffsetMain, uint32_t* aaBytesMain, uint32_t* aaFlashIdFallback, uint32_t* aaOffsetFallback, uint32_t* aaBytesFallback)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRomDirInfo(*aaFlashIdMain, *aaOffsetMain, *aaBytesMain, *aaFlashIdFallback, *aaOffsetFallback, *aaBytesFallback);
    }
    catch (ProxyError& ) {
        err = -1;
        *aaFlashIdMain = 0;
        *aaOffsetMain = 0;
        *aaBytesMain = 0;
        *aaFlashIdFallback = 0;
        *aaOffsetFallback = 0;
        *aaBytesFallback = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkFlash1BeginRomDirInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRomDirInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkFlash1EndRomDirInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaFlashIdMain, uint32_t* aaOffsetMain, uint32_t* aaBytesMain, uint32_t* aaFlashIdFallback, uint32_t* aaOffsetFallback, uint32_t* aaBytesFallback)
{
    int32_t err = 0;
    CpProxyLinnCoUkFlash1C* proxyC = reinterpret_cast<CpProxyLinnCoUkFlash1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRomDirInfo(*async, *aaFlashIdMain, *aaOffsetMain, *aaBytesMain, *aaFlashIdFallback, *aaOffsetFallback, *aaBytesFallback);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

