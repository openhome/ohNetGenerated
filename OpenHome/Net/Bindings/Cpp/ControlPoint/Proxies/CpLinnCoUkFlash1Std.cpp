#include "CpLinnCoUkFlash1.h"
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


class SyncReadLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncReadLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, std::string& aaBuffer);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
    std::string& iaBuffer;
};

SyncReadLinnCoUkFlash1Cpp::SyncReadLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, std::string& aaBuffer)
    : iService(aProxy)
    , iaBuffer(aaBuffer)
{
}

void SyncReadLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iaBuffer);
}


class SyncWriteLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncWriteLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncWriteLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
};

SyncWriteLinnCoUkFlash1Cpp::SyncWriteLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncWriteLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndWrite(aAsync);
}


class SyncEraseLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncEraseLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
};

SyncEraseLinnCoUkFlash1Cpp::SyncEraseLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncEraseLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndErase(aAsync);
}


class SyncEraseSectorLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncEraseSectorLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
};

SyncEraseSectorLinnCoUkFlash1Cpp::SyncEraseSectorLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSector(aAsync);
}


class SyncEraseSectorsLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncEraseSectorsLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseSectorsLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
};

SyncEraseSectorsLinnCoUkFlash1Cpp::SyncEraseSectorsLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncEraseSectorsLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseSectors(aAsync);
}


class SyncEraseChipLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncEraseChipLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEraseChipLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
};

SyncEraseChipLinnCoUkFlash1Cpp::SyncEraseChipLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncEraseChipLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndEraseChip(aAsync);
}


class SyncSectorsLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncSectorsLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaSectors);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorsLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
    uint32_t& iaSectors;
};

SyncSectorsLinnCoUkFlash1Cpp::SyncSectorsLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaSectors)
    : iService(aProxy)
    , iaSectors(aaSectors)
{
}

void SyncSectorsLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectors(aAsync, iaSectors);
}


class SyncSectorBytesLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncSectorBytesLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaBytes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSectorBytesLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
    uint32_t& iaBytes;
};

SyncSectorBytesLinnCoUkFlash1Cpp::SyncSectorBytesLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaBytes)
    : iService(aProxy)
    , iaBytes(aaBytes)
{
}

void SyncSectorBytesLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSectorBytes(aAsync, iaBytes);
}


class SyncRomDirInfoLinnCoUkFlash1Cpp : public SyncProxyAction
{
public:
    SyncRomDirInfoLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRomDirInfoLinnCoUkFlash1Cpp() {}
private:
    CpProxyLinnCoUkFlash1Cpp& iService;
    uint32_t& iaFlashIdMain;
    uint32_t& iaOffsetMain;
    uint32_t& iaBytesMain;
    uint32_t& iaFlashIdFallback;
    uint32_t& iaOffsetFallback;
    uint32_t& iaBytesFallback;
};

SyncRomDirInfoLinnCoUkFlash1Cpp::SyncRomDirInfoLinnCoUkFlash1Cpp(CpProxyLinnCoUkFlash1Cpp& aProxy, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback)
    : iService(aProxy)
    , iaFlashIdMain(aaFlashIdMain)
    , iaOffsetMain(aaOffsetMain)
    , iaBytesMain(aaBytesMain)
    , iaFlashIdFallback(aaFlashIdFallback)
    , iaOffsetFallback(aaOffsetFallback)
    , iaBytesFallback(aaBytesFallback)
{
}

void SyncRomDirInfoLinnCoUkFlash1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRomDirInfo(aAsync, iaFlashIdMain, iaOffsetMain, iaBytesMain, iaFlashIdFallback, iaOffsetFallback, iaBytesFallback);
}


CpProxyLinnCoUkFlash1Cpp::CpProxyLinnCoUkFlash1Cpp(CpDeviceCpp& aDevice)
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

CpProxyLinnCoUkFlash1Cpp::~CpProxyLinnCoUkFlash1Cpp()
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

void CpProxyLinnCoUkFlash1Cpp::SyncRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, std::string& aaBuffer)
{
    SyncReadLinnCoUkFlash1Cpp sync(*this, aaBuffer);
    BeginRead(aaId, aaAddress, aaLength, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkFlash1Cpp::EndRead(IAsync& aAsync, std::string& aaBuffer)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaBuffer.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkFlash1Cpp::SyncWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource)
{
    SyncWriteLinnCoUkFlash1Cpp sync(*this);
    BeginWrite(aaId, aaAddress, aaSource, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionWrite, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionWrite->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    {
        Brn buf((const TByte*)aaSource.c_str(), (TUint)aaSource.length());
        invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1Cpp::EndWrite(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1Cpp::SyncErase(uint32_t aaId, uint32_t aaAddress)
{
    SyncEraseLinnCoUkFlash1Cpp sync(*this);
    BeginErase(aaId, aaAddress, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginErase(uint32_t aaId, uint32_t aaAddress, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionErase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionErase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaAddress));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1Cpp::EndErase(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1Cpp::SyncEraseSector(uint32_t aaId, uint32_t aaSector)
{
    SyncEraseSectorLinnCoUkFlash1Cpp sync(*this);
    BeginEraseSector(aaId, aaSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginEraseSector(uint32_t aaId, uint32_t aaSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseSector, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSector->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaSector));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1Cpp::EndEraseSector(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1Cpp::SyncEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector)
{
    SyncEraseSectorsLinnCoUkFlash1Cpp sync(*this);
    BeginEraseSectors(aaId, aaFirstSector, aaLastSector, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseSectors, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseSectors->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaFirstSector));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaLastSector));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1Cpp::EndEraseSectors(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1Cpp::SyncEraseChip(uint32_t aaId)
{
    SyncEraseChipLinnCoUkFlash1Cpp sync(*this);
    BeginEraseChip(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginEraseChip(uint32_t aaId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEraseChip, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEraseChip->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaId));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyLinnCoUkFlash1Cpp::EndEraseChip(IAsync& aAsync)
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

void CpProxyLinnCoUkFlash1Cpp::SyncSectors(uint32_t aaId, uint32_t& aaSectors)
{
    SyncSectorsLinnCoUkFlash1Cpp sync(*this, aaSectors);
    BeginSectors(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginSectors(uint32_t aaId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkFlash1Cpp::EndSectors(IAsync& aAsync, uint32_t& aaSectors)
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

void CpProxyLinnCoUkFlash1Cpp::SyncSectorBytes(uint32_t aaId, uint32_t& aaBytes)
{
    SyncSectorBytesLinnCoUkFlash1Cpp sync(*this, aaBytes);
    BeginSectorBytes(aaId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginSectorBytes(uint32_t aaId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkFlash1Cpp::EndSectorBytes(IAsync& aAsync, uint32_t& aaBytes)
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

void CpProxyLinnCoUkFlash1Cpp::SyncRomDirInfo(uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback)
{
    SyncRomDirInfoLinnCoUkFlash1Cpp sync(*this, aaFlashIdMain, aaOffsetMain, aaBytesMain, aaFlashIdFallback, aaOffsetFallback, aaBytesFallback);
    BeginRomDirInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkFlash1Cpp::BeginRomDirInfo(FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkFlash1Cpp::EndRomDirInfo(IAsync& aAsync, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback)
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

