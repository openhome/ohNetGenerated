#include "DvLinnCoUkFlash1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderLinnCoUkFlash1::DvProviderLinnCoUkFlash1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Flash", 1)
{
    Construct();
}

DvProviderLinnCoUkFlash1::DvProviderLinnCoUkFlash1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Flash", 1)
{
    Construct();
}

void DvProviderLinnCoUkFlash1::Construct()
{
}

void DvProviderLinnCoUkFlash1::EnableActionRead()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Read");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterUint("aLength"));
    action->AddOutputParameter(new ParameterBinary("aBuffer"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoRead);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionWrite()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Write");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    action->AddInputParameter(new ParameterBinary("aSource"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoWrite);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionErase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Erase");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoErase);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionEraseSector()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSector");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoEraseSector);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionEraseSectors()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseSectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddInputParameter(new ParameterUint("aFirstSector"));
    action->AddInputParameter(new ParameterUint("aLastSector"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoEraseSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionEraseChip()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EraseChip");
    action->AddInputParameter(new ParameterUint("aId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoEraseChip);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionSectors()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Sectors");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aSectors"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoSectors);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionSectorBytes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SectorBytes");
    action->AddInputParameter(new ParameterUint("aId"));
    action->AddOutputParameter(new ParameterUint("aBytes"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoSectorBytes);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::EnableActionRomDirInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RomDirInfo");
    action->AddOutputParameter(new ParameterUint("aFlashIdMain"));
    action->AddOutputParameter(new ParameterUint("aOffsetMain"));
    action->AddOutputParameter(new ParameterUint("aBytesMain"));
    action->AddOutputParameter(new ParameterUint("aFlashIdFallback"));
    action->AddOutputParameter(new ParameterUint("aOffsetFallback"));
    action->AddOutputParameter(new ParameterUint("aBytesFallback"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkFlash1::DoRomDirInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkFlash1::DoRead(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    TUint aLength = aInvocation.InvocationReadUint("aLength");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBinary respaBuffer(aInvocation, "aBuffer");
    Read(invocation, aId, aAddress, aLength, respaBuffer);
}

void DvProviderLinnCoUkFlash1::DoWrite(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    Brh aSource;
    aInvocation.InvocationReadBinary("aSource", aSource);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Write(invocation, aId, aAddress, aSource);
}

void DvProviderLinnCoUkFlash1::DoErase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aAddress = aInvocation.InvocationReadUint("aAddress");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Erase(invocation, aId, aAddress);
}

void DvProviderLinnCoUkFlash1::DoEraseSector(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aSector = aInvocation.InvocationReadUint("aSector");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    EraseSector(invocation, aId, aSector);
}

void DvProviderLinnCoUkFlash1::DoEraseSectors(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    TUint aFirstSector = aInvocation.InvocationReadUint("aFirstSector");
    TUint aLastSector = aInvocation.InvocationReadUint("aLastSector");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    EraseSectors(invocation, aId, aFirstSector, aLastSector);
}

void DvProviderLinnCoUkFlash1::DoEraseChip(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    EraseChip(invocation, aId);
}

void DvProviderLinnCoUkFlash1::DoSectors(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaSectors(aInvocation, "aSectors");
    Sectors(invocation, aId, respaSectors);
}

void DvProviderLinnCoUkFlash1::DoSectorBytes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aId = aInvocation.InvocationReadUint("aId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaBytes(aInvocation, "aBytes");
    SectorBytes(invocation, aId, respaBytes);
}

void DvProviderLinnCoUkFlash1::DoRomDirInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaFlashIdMain(aInvocation, "aFlashIdMain");
    DviInvocationResponseUint respaOffsetMain(aInvocation, "aOffsetMain");
    DviInvocationResponseUint respaBytesMain(aInvocation, "aBytesMain");
    DviInvocationResponseUint respaFlashIdFallback(aInvocation, "aFlashIdFallback");
    DviInvocationResponseUint respaOffsetFallback(aInvocation, "aOffsetFallback");
    DviInvocationResponseUint respaBytesFallback(aInvocation, "aBytesFallback");
    RomDirInfo(invocation, respaFlashIdMain, respaOffsetMain, respaBytesMain, respaFlashIdFallback, respaOffsetFallback, respaBytesFallback);
}

void DvProviderLinnCoUkFlash1::Read(IDvInvocation& /*aResponse*/, TUint /*aaId*/, TUint /*aaAddress*/, TUint /*aaLength*/, IDvInvocationResponseBinary& /*aaBuffer*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::Write(IDvInvocation& /*aResponse*/, TUint /*aaId*/, TUint /*aaAddress*/, const Brx& /*aaSource*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::Erase(IDvInvocation& /*aResponse*/, TUint /*aaId*/, TUint /*aaAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::EraseSector(IDvInvocation& /*aResponse*/, TUint /*aaId*/, TUint /*aaSector*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::EraseSectors(IDvInvocation& /*aResponse*/, TUint /*aaId*/, TUint /*aaFirstSector*/, TUint /*aaLastSector*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::EraseChip(IDvInvocation& /*aResponse*/, TUint /*aaId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::Sectors(IDvInvocation& /*aResponse*/, TUint /*aaId*/, IDvInvocationResponseUint& /*aaSectors*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::SectorBytes(IDvInvocation& /*aResponse*/, TUint /*aaId*/, IDvInvocationResponseUint& /*aaBytes*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkFlash1::RomDirInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aaFlashIdMain*/, IDvInvocationResponseUint& /*aaOffsetMain*/, IDvInvocationResponseUint& /*aaBytesMain*/, IDvInvocationResponseUint& /*aaFlashIdFallback*/, IDvInvocationResponseUint& /*aaOffsetFallback*/, IDvInvocationResponseUint& /*aaBytesFallback*/)
{
    ASSERTS();
}

