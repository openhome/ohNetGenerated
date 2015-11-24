#include "DvLinnCoUkFlash1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderLinnCoUkFlash1C : public DvProvider
{
public:
    DvProviderLinnCoUkFlash1C(DvDeviceC aDevice);
    void EnableActionRead(CallbackFlash1Read aCallback, void* aPtr);
    void EnableActionWrite(CallbackFlash1Write aCallback, void* aPtr);
    void EnableActionErase(CallbackFlash1Erase aCallback, void* aPtr);
    void EnableActionEraseSector(CallbackFlash1EraseSector aCallback, void* aPtr);
    void EnableActionEraseSectors(CallbackFlash1EraseSectors aCallback, void* aPtr);
    void EnableActionEraseChip(CallbackFlash1EraseChip aCallback, void* aPtr);
    void EnableActionSectors(CallbackFlash1Sectors aCallback, void* aPtr);
    void EnableActionSectorBytes(CallbackFlash1SectorBytes aCallback, void* aPtr);
    void EnableActionRomDirInfo(CallbackFlash1RomDirInfo aCallback, void* aPtr);
private:
    void DoRead(IDviInvocation& aInvocation);
    void DoWrite(IDviInvocation& aInvocation);
    void DoErase(IDviInvocation& aInvocation);
    void DoEraseSector(IDviInvocation& aInvocation);
    void DoEraseSectors(IDviInvocation& aInvocation);
    void DoEraseChip(IDviInvocation& aInvocation);
    void DoSectors(IDviInvocation& aInvocation);
    void DoSectorBytes(IDviInvocation& aInvocation);
    void DoRomDirInfo(IDviInvocation& aInvocation);
private:
    CallbackFlash1Read iCallbackRead;
    void* iPtrRead;
    CallbackFlash1Write iCallbackWrite;
    void* iPtrWrite;
    CallbackFlash1Erase iCallbackErase;
    void* iPtrErase;
    CallbackFlash1EraseSector iCallbackEraseSector;
    void* iPtrEraseSector;
    CallbackFlash1EraseSectors iCallbackEraseSectors;
    void* iPtrEraseSectors;
    CallbackFlash1EraseChip iCallbackEraseChip;
    void* iPtrEraseChip;
    CallbackFlash1Sectors iCallbackSectors;
    void* iPtrSectors;
    CallbackFlash1SectorBytes iCallbackSectorBytes;
    void* iPtrSectorBytes;
    CallbackFlash1RomDirInfo iCallbackRomDirInfo;
    void* iPtrRomDirInfo;
};

DvProviderLinnCoUkFlash1C::DvProviderLinnCoUkFlash1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Flash", 1)
{
}

void DvProviderLinnCoUkFlash1C::EnableActionRead(CallbackFlash1Read aCallback, void* aPtr)
{
    iCallbackRead = aCallback;
    iPtrRead = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Read");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterUint("aLength"));
    action->AddOutputParameter(new ParameterBinary("aBuffer"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoRead);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionWrite(CallbackFlash1Write aCallback, void* aPtr)
{
    iCallbackWrite = aCallback;
    iPtrWrite = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Write");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterBinary("aSource"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoWrite);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionErase(CallbackFlash1Erase aCallback, void* aPtr)
{
    iCallbackErase = aCallback;
    iPtrErase = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Erase");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoErase);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionEraseSector(CallbackFlash1EraseSector aCallback, void* aPtr)
{
    iCallbackEraseSector = aCallback;
    iPtrEraseSector = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSector");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoEraseSector);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionEraseSectors(CallbackFlash1EraseSectors aCallback, void* aPtr)
{
    iCallbackEraseSectors = aCallback;
    iPtrEraseSectors = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aFirstSector"));
    action->AddInputParameter(new ParameterUint("aLastSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoEraseSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionEraseChip(CallbackFlash1EraseChip aCallback, void* aPtr)
{
    iCallbackEraseChip = aCallback;
    iPtrEraseChip = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseChip");
    action->AddInputParameter(new ParameterUint("aId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoEraseChip);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionSectors(CallbackFlash1Sectors aCallback, void* aPtr)
{
    iCallbackSectors = aCallback;
    iPtrSectors = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Sectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aSectors"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionSectorBytes(CallbackFlash1SectorBytes aCallback, void* aPtr)
{
    iCallbackSectorBytes = aCallback;
    iPtrSectorBytes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SectorBytes");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aBytes"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoSectorBytes);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::EnableActionRomDirInfo(CallbackFlash1RomDirInfo aCallback, void* aPtr)
{
    iCallbackRomDirInfo = aCallback;
    iPtrRomDirInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RomDirInfo");
    action->AddOutputParameter(new ParameterUint("aFlashIdMain"));
    action->AddOutputParameter(new ParameterUint("aOffsetMain"));
    action->AddOutputParameter(new ParameterUint("aBytesMain"));
    action->AddOutputParameter(new ParameterUint("aFlashIdFallback"));
    action->AddOutputParameter(new ParameterUint("aOffsetFallback"));
    action->AddOutputParameter(new ParameterUint("aBytesFallback"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1C::DoRomDirInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1C::DoRead(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    TUint aLength = aInvocation.InvocationReadUint("aLength");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* aBuffer;
    uint32_t aBufferLen;
    ASSERT(iCallbackRead != NULL);
    if (0 != iCallbackRead(iPtrRead, invocationC, invocationCPtr, aId, aAddress, aLength, &aBuffer, &aBufferLen)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBinary respaBuffer(aInvocation, "aBuffer");
    invocation.StartResponse();
    Brh bufaBuffer;
    bufaBuffer.Set((const TByte*)aBuffer, aBufferLen);
    OhNetFreeExternal(aBuffer);
    respaBuffer.Write(bufaBuffer);
    respaBuffer.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoWrite(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    Brh aSource;
    aInvocation.InvocationReadBinary("aSource", aSource);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackWrite != NULL);
    if (0 != iCallbackWrite(iPtrWrite, invocationC, invocationCPtr, aId, aAddress, (const char*)aSource.Ptr(), aSource.Bytes())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoErase(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackErase != NULL);
    if (0 != iCallbackErase(iPtrErase, invocationC, invocationCPtr, aId, aAddress)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoEraseSector(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aSector = aInvocation.InvocationReadUint("aSector");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackEraseSector != NULL);
    if (0 != iCallbackEraseSector(iPtrEraseSector, invocationC, invocationCPtr, aId, aSector)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoEraseSectors(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aFirstSector = aInvocation.InvocationReadUint("aFirstSector");
    TUint aLastSector = aInvocation.InvocationReadUint("aLastSector");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackEraseSectors != NULL);
    if (0 != iCallbackEraseSectors(iPtrEraseSectors, invocationC, invocationCPtr, aId, aFirstSector, aLastSector)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoEraseChip(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackEraseChip != NULL);
    if (0 != iCallbackEraseChip(iPtrEraseChip, invocationC, invocationCPtr, aId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoSectors(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t aSectors;
    ASSERT(iCallbackSectors != NULL);
    if (0 != iCallbackSectors(iPtrSectors, invocationC, invocationCPtr, aId, &aSectors)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respaSectors(aInvocation, "aSectors");
    invocation.StartResponse();
    respaSectors.Write(aSectors);
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoSectorBytes(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t aBytes;
    ASSERT(iCallbackSectorBytes != NULL);
    if (0 != iCallbackSectorBytes(iPtrSectorBytes, invocationC, invocationCPtr, aId, &aBytes)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respaBytes(aInvocation, "aBytes");
    invocation.StartResponse();
    respaBytes.Write(aBytes);
    invocation.EndResponse();
}

void DvProviderLinnCoUkFlash1C::DoRomDirInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t aFlashIdMain;
    uint32_t aOffsetMain;
    uint32_t aBytesMain;
    uint32_t aFlashIdFallback;
    uint32_t aOffsetFallback;
    uint32_t aBytesFallback;
    ASSERT(iCallbackRomDirInfo != NULL);
    if (0 != iCallbackRomDirInfo(iPtrRomDirInfo, invocationC, invocationCPtr, &aFlashIdMain, &aOffsetMain, &aBytesMain, &aFlashIdFallback, &aOffsetFallback, &aBytesFallback)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respaFlashIdMain(aInvocation, "aFlashIdMain");
    DviInvocationResponseUint respaOffsetMain(aInvocation, "aOffsetMain");
    DviInvocationResponseUint respaBytesMain(aInvocation, "aBytesMain");
    DviInvocationResponseUint respaFlashIdFallback(aInvocation, "aFlashIdFallback");
    DviInvocationResponseUint respaOffsetFallback(aInvocation, "aOffsetFallback");
    DviInvocationResponseUint respaBytesFallback(aInvocation, "aBytesFallback");
    invocation.StartResponse();
    respaFlashIdMain.Write(aFlashIdMain);
    respaOffsetMain.Write(aOffsetMain);
    respaBytesMain.Write(aBytesMain);
    respaFlashIdFallback.Write(aFlashIdFallback);
    respaOffsetFallback.Write(aOffsetFallback);
    respaBytesFallback.Write(aBytesFallback);
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkFlash1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkFlash1C(aDevice);
}

void STDCALL DvProviderLinnCoUkFlash1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionRead(THandle aProvider, CallbackFlash1Read aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionRead(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionWrite(THandle aProvider, CallbackFlash1Write aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionWrite(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionErase(THandle aProvider, CallbackFlash1Erase aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionErase(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseSector(THandle aProvider, CallbackFlash1EraseSector aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionEraseSector(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseSectors(THandle aProvider, CallbackFlash1EraseSectors aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionEraseSectors(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseChip(THandle aProvider, CallbackFlash1EraseChip aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionEraseChip(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionSectors(THandle aProvider, CallbackFlash1Sectors aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionSectors(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionSectorBytes(THandle aProvider, CallbackFlash1SectorBytes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionSectorBytes(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkFlash1EnableActionRomDirInfo(THandle aProvider, CallbackFlash1RomDirInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkFlash1C*>(aProvider)->EnableActionRomDirInfo(aCallback, aPtr);
}

