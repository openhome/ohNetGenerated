#include "DvLinnCoUkVolkano1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderLinnCoUkVolkano1::DvProviderLinnCoUkVolkano1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Volkano", 1)
{
    Construct();
}

DvProviderLinnCoUkVolkano1::DvProviderLinnCoUkVolkano1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Volkano", 1)
{
    Construct();
}

void DvProviderLinnCoUkVolkano1::Construct()
{
}

void DvProviderLinnCoUkVolkano1::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionBootMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootMode");
    TChar** allowedValues;
    TUint index;
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    allowedValues[index++] = (TChar*)"Ram";
    action->AddOutputParameter(new ParameterString("aMode", allowedValues, 3));
    delete[] allowedValues;
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionSetBootMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBootMode");
    TChar** allowedValues;
    TUint index;
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    action->AddInputParameter(new ParameterString("aMode", allowedValues, 2));
    delete[] allowedValues;
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionBspType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionUglyName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionMacAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionProductId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionBoardType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionMaxBoards()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionSoftwareVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionSoftwareUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::EnableActionDeviceInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterString("aDeviceInfoXml"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Reboot(invocation);
}

void DvProviderLinnCoUkVolkano1::DoBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMode(aInvocation, "aMode");
    BootMode(invocation, respaMode);
}

void DvProviderLinnCoUkVolkano1::DoSetBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz aMode;
    aInvocation.InvocationReadString("aMode", aMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetBootMode(invocation, aMode);
}

void DvProviderLinnCoUkVolkano1::DoBspType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBspType(aInvocation, "aBspType");
    BspType(invocation, respaBspType);
}

void DvProviderLinnCoUkVolkano1::DoUglyName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaUglyName(aInvocation, "aUglyName");
    UglyName(invocation, respaUglyName);
}

void DvProviderLinnCoUkVolkano1::DoMacAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMacAddress(aInvocation, "aMacAddress");
    MacAddress(invocation, respaMacAddress);
}

void DvProviderLinnCoUkVolkano1::DoProductId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaProductNumber(aInvocation, "aProductNumber");
    ProductId(invocation, respaProductNumber);
}

void DvProviderLinnCoUkVolkano1::DoBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardId(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano1::DoBoardType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardType(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano1::DoMaxBoards(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaMaxBoards(aInvocation, "aMaxBoards");
    MaxBoards(invocation, respaMaxBoards);
}

void DvProviderLinnCoUkVolkano1::DoSoftwareVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareVersion(invocation, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano1::DoSoftwareUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respaAvailable(aInvocation, "aAvailable");
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareUpdate(invocation, respaAvailable, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano1::DoDeviceInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaDeviceInfoXml(aInvocation, "aDeviceInfoXml");
    DeviceInfo(invocation, respaDeviceInfoXml);
}

void DvProviderLinnCoUkVolkano1::Reboot(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::BootMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::SetBootMode(IDvInvocation& /*aResponse*/, const Brx& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::BspType(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaBspType*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::UglyName(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaUglyName*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::MacAddress(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMacAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::ProductId(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaProductNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::BoardId(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::BoardType(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::MaxBoards(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aaMaxBoards*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::SoftwareVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::SoftwareUpdate(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aaAvailable*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1::DeviceInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaDeviceInfoXml*/)
{
    ASSERTS();
}

