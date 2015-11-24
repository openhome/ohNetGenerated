#include "DvLinnCoUkFlash1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderLinnCoUkFlash1Cpp::DvProviderLinnCoUkFlash1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Flash", 1)
{
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionRead()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Read");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterUint("aLength"));
    action->AddOutputParameter(new ParameterBinary("aBuffer"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoRead);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionWrite()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Write");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterBinary("aSource"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoWrite);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionErase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Erase");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoErase);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionEraseSector()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSector");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoEraseSector);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionEraseSectors()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aFirstSector"));
    action->AddInputParameter(new ParameterUint("aLastSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoEraseSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionEraseChip()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseChip");
    action->AddInputParameter(new ParameterUint("aId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoEraseChip);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionSectors()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Sectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aSectors"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionSectorBytes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SectorBytes");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aBytes"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoSectorBytes);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::EnableActionRomDirInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RomDirInfo");
    action->AddOutputParameter(new ParameterUint("aFlashIdMain"));
    action->AddOutputParameter(new ParameterUint("aOffsetMain"));
    action->AddOutputParameter(new ParameterUint("aBytesMain"));
    action->AddOutputParameter(new ParameterUint("aFlashIdFallback"));
    action->AddOutputParameter(new ParameterUint("aOffsetFallback"));
    action->AddOutputParameter(new ParameterUint("aBytesFallback"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1Cpp::DoRomDirInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1Cpp::DoRead(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    uint32_t aAddress = aInvocation.InvocationReadUint("aAddress");
    uint32_t aLength = aInvocation.InvocationReadUint("aLength");
    aInvocation.InvocationReadEnd();
    std::string respaBuffer;
    DvInvocationStd invocation(aInvocation);
    Read(invocation, aId, aAddress, aLength, respaBuffer);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBinary respWriteraBuffer(aInvocation, "aBuffer");
    Brn buf_aBuffer((const TByte*)respaBuffer.c_str(), (TUint)respaBuffer.length());
    respWriteraBuffer.Write(buf_aBuffer);
    aInvocation.InvocationWriteBinaryEnd("aBuffer");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoWrite(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    uint32_t aAddress = aInvocation.InvocationReadUint("aAddress");
    Brh buf_aSource;
    aInvocation.InvocationReadBinary("aSource", buf_aSource);
    std::string aSource((const char*)buf_aSource.Ptr(), buf_aSource.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Write(invocation, aId, aAddress, aSource);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoErase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    uint32_t aAddress = aInvocation.InvocationReadUint("aAddress");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Erase(invocation, aId, aAddress);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoEraseSector(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    uint32_t aSector = aInvocation.InvocationReadUint("aSector");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    EraseSector(invocation, aId, aSector);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoEraseSectors(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    uint32_t aFirstSector = aInvocation.InvocationReadUint("aFirstSector");
    uint32_t aLastSector = aInvocation.InvocationReadUint("aLastSector");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    EraseSectors(invocation, aId, aFirstSector, aLastSector);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoEraseChip(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    EraseChip(invocation, aId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoSectors(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    uint32_t respaSectors;
    DvInvocationStd invocation(aInvocation);
    Sectors(invocation, aId, respaSectors);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriteraSectors(aInvocation, "aSectors");
    respWriteraSectors.Write(respaSectors);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoSectorBytes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    uint32_t respaBytes;
    DvInvocationStd invocation(aInvocation);
    SectorBytes(invocation, aId, respaBytes);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriteraBytes(aInvocation, "aBytes");
    respWriteraBytes.Write(respaBytes);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::DoRomDirInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respaFlashIdMain;
    uint32_t respaOffsetMain;
    uint32_t respaBytesMain;
    uint32_t respaFlashIdFallback;
    uint32_t respaOffsetFallback;
    uint32_t respaBytesFallback;
    DvInvocationStd invocation(aInvocation);
    RomDirInfo(invocation, respaFlashIdMain, respaOffsetMain, respaBytesMain, respaFlashIdFallback, respaOffsetFallback, respaBytesFallback);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriteraFlashIdMain(aInvocation, "aFlashIdMain");
    respWriteraFlashIdMain.Write(respaFlashIdMain);
    DviInvocationResponseUint respWriteraOffsetMain(aInvocation, "aOffsetMain");
    respWriteraOffsetMain.Write(respaOffsetMain);
    DviInvocationResponseUint respWriteraBytesMain(aInvocation, "aBytesMain");
    respWriteraBytesMain.Write(respaBytesMain);
    DviInvocationResponseUint respWriteraFlashIdFallback(aInvocation, "aFlashIdFallback");
    respWriteraFlashIdFallback.Write(respaFlashIdFallback);
    DviInvocationResponseUint respWriteraOffsetFallback(aInvocation, "aOffsetFallback");
    respWriteraOffsetFallback.Write(respaOffsetFallback);
    DviInvocationResponseUint respWriteraBytesFallback(aInvocation, "aBytesFallback");
    respWriteraBytesFallback.Write(respaBytesFallback);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkFlash1Cpp::Read(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t /*aaAddress*/, uint32_t /*aaLength*/, std::string& /*aaBuffer*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::Write(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t /*aaAddress*/, const std::string& /*aaSource*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::Erase(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t /*aaAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::EraseSector(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t /*aaSector*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::EraseSectors(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t /*aaFirstSector*/, uint32_t /*aaLastSector*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::EraseChip(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::Sectors(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t& /*aaSectors*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::SectorBytes(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaId*/, uint32_t& /*aaBytes*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1Cpp::RomDirInfo(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aaFlashIdMain*/, uint32_t& /*aaOffsetMain*/, uint32_t& /*aaBytesMain*/, uint32_t& /*aaFlashIdFallback*/, uint32_t& /*aaOffsetFallback*/, uint32_t& /*aaBytesFallback*/)
{
    ASSERTS();
}

