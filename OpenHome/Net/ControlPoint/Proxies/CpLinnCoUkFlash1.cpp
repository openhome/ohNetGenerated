#include "CpLinnCoUkFlash1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncReadLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncReadLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, Brh& aaBuffer);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
    Brh& iaBuffer;
};

SyncReadLinnCoUkFlash1::SyncReadLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, Brh& aaBuffer)
    : iService(aProxy)
    , iaBuffer(aaBuffer)
{
}

void SyncReadLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iaBuffer);
}


class SyncWriteLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncWriteLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncWriteLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
};

SyncWriteLinnCoUkFlash1::SyncWriteLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy)
    : iService(aProxy)
{
}

void SyncWriteLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndWrite(aAsync);
}


class SyncEraseLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncEraseLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
};

SyncEraseLinnCoUkFlash1::SyncEraseLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy)
    : iService(aProxy)
{
}

void SyncEraseLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndErase(aAsync);
}


class SyncEraseSectorLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncEraseSectorLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
};

SyncEraseSectorLinnCoUkFlash1::SyncEraseSectorLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSector(aAsync);
}


class SyncEraseSectorsLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncEraseSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorsLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
};

SyncEraseSectorsLinnCoUkFlash1::SyncEraseSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorsLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSectors(aAsync);
}


class SyncEraseChipLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncEraseChipLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseChipLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
};

SyncEraseChipLinnCoUkFlash1::SyncEraseChipLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy)
    : iService(aProxy)
{
}

void SyncEraseChipLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseChip(aAsync);
}


class SyncSectorsLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaSectors);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorsLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
    TUint& iaSectors;
};

SyncSectorsLinnCoUkFlash1::SyncSectorsLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaSectors)
    : iService(aProxy)
    , iaSectors(aaSectors)
{
}

void SyncSectorsLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectors(aAsync, iaSectors);
}


class SyncSectorBytesLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncSectorBytesLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaBytes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorBytesLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
    TUint& iaBytes;
};

SyncSectorBytesLinnCoUkFlash1::SyncSectorBytesLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaBytes)
    : iService(aProxy)
    , iaBytes(aaBytes)
{
}

void SyncSectorBytesLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectorBytes(aAsync, iaBytes);
}


class SyncRomDirInfoLinnCoUkFlash1 : public SyncProxyAction
{
public:
    SyncRomDirInfoLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRomDirInfoLinnCoUkFlash1() {}
private:
    CpProxyLinnCoUkFlash1& iService;
    TUint& iaFlashIdMain;
    TUint& iaOffsetMain;
    TUint& iaBytesMain;
    TUint& iaFlashIdFallback;
    TUint& iaOffsetFallback;
    TUint& iaBytesFallback;
};

SyncRomDirInfoLinnCoUkFlash1::SyncRomDirInfoLinnCoUkFlash1(CpProxyLinnCoUkFlash1& aProxy, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
    : iService(aProxy)
    , iaFlashIdMain(aaFlashIdMain)
    , iaOffsetMain(aaOffsetMain)
    , iaBytesMain(aaBytesMain)
    , iaFlashIdFallback(aaFlashIdFallback)
    , iaOffsetFallback(aaOffsetFallback)
    , iaBytesFallback(aaBytesFallback)
{
}

void SyncRomDirInfoLinnCoUkFlash1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRomDirInfo(aAsync, iaFlashIdMain, iaOffsetMain, iaBytesMain, iaFlashIdFallback, iaOffsetFallback, iaBytesFallback);
}


CpProxyLinnCoUkFlash1::CpProxyLinnCoUkFlash1(CpDevice& aDevice)
    : CpProxy("linn-co-uk", "Flash", 1, aDevice.Device())
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

CpProxyLinnCoUkFlash1::~CpProxyLinnCoUkFlash1()
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

void CpProxyLinnCoUkFlash1::SyncRead(TUint aaId, TUint aaAddress, TUint aaLength, Brh& aaBuffer)
{
    SyncReadLinnCoUkFlash1 sync(*this, aaBuffer);
    BeginRead(aaId, aaAddress, aaLength, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginRead(TUint aaId, TUint aaAddress, TUint aaLength, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaLength));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndRead(IAsync& aAsync, Brh& aaBuffer)
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

void CpProxyLinnCoUkFlash1::SyncWrite(TUint aaId, TUint aaAddress, const Brx& aaSource)
{
    SyncWriteLinnCoUkFlash1 sync(*this);
    BeginWrite(aaId, aaAddress, aaSource, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginWrite(TUint aaId, TUint aaAddress, const Brx& aaSource, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionWrite, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionWrite->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aaSource));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndWrite(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1::SyncErase(TUint aaId, TUint aaAddress)
{
    SyncEraseLinnCoUkFlash1 sync(*this);
    BeginErase(aaId, aaAddress, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginErase(TUint aaId, TUint aaAddress, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionErase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionErase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndErase(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1::SyncEraseSector(TUint aaId, TUint aaSector)
{
    SyncEraseSectorLinnCoUkFlash1 sync(*this);
    BeginEraseSector(aaId, aaSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginEraseSector(TUint aaId, TUint aaSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseSector, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSector->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaSector));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndEraseSector(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1::SyncEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector)
{
    SyncEraseSectorsLinnCoUkFlash1 sync(*this);
    BeginEraseSectors(aaId, aaFirstSector, aaLastSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseSectors, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSectors->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaFirstSector));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaLastSector));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndEraseSectors(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1::SyncEraseChip(TUint aaId)
{
    SyncEraseChipLinnCoUkFlash1 sync(*this);
    BeginEraseChip(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginEraseChip(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseChip, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseChip->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndEraseChip(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1::SyncSectors(TUint aaId, TUint& aaSectors)
{
    SyncSectorsLinnCoUkFlash1 sync(*this, aaSectors);
    BeginSectors(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginSectors(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSectors, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSectors->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSectors->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndSectors(IAsync& aAsync, TUint& aaSectors)
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

void CpProxyLinnCoUkFlash1::SyncSectorBytes(TUint aaId, TUint& aaBytes)
{
    SyncSectorBytesLinnCoUkFlash1 sync(*this, aaBytes);
    BeginSectorBytes(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginSectorBytes(TUint aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSectorBytes, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSectorBytes->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSectorBytes->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndSectorBytes(IAsync& aAsync, TUint& aaBytes)
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

void CpProxyLinnCoUkFlash1::SyncRomDirInfo(TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
{
    SyncRomDirInfoLinnCoUkFlash1 sync(*this, aaFlashIdMain, aaOffsetMain, aaBytesMain, aaFlashIdFallback, aaOffsetFallback, aaBytesFallback);
    BeginRomDirInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1::BeginRomDirInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRomDirInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRomDirInfo->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1::EndRomDirInfo(IAsync& aAsync, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback)
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

