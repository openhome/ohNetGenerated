#include "DvLinnCoUkVolkano2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkVolkano2::SetPropertyDeviceInfo(const Brx& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    return SetPropertyString(*iPropertyDeviceInfo, aValue);
}

void DvProviderLinnCoUkVolkano2::GetPropertyDeviceInfo(Brhz& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    aValue.Set(iPropertyDeviceInfo->Value());
}

TBool DvProviderLinnCoUkVolkano2::SetPropertyIpAddressList(const Brx& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    return SetPropertyString(*iPropertyIpAddressList, aValue);
}

void DvProviderLinnCoUkVolkano2::GetPropertyIpAddressList(Brhz& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    aValue.Set(iPropertyIpAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano2::SetPropertyMacAddressList(const Brx& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    return SetPropertyString(*iPropertyMacAddressList, aValue);
}

void DvProviderLinnCoUkVolkano2::GetPropertyMacAddressList(Brhz& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    aValue.Set(iPropertyMacAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano2::SetPropertyCoreBoardId(const Brx& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    return SetPropertyString(*iPropertyCoreBoardId, aValue);
}

void DvProviderLinnCoUkVolkano2::GetPropertyCoreBoardId(Brhz& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    aValue.Set(iPropertyCoreBoardId->Value());
}

DvProviderLinnCoUkVolkano2::DvProviderLinnCoUkVolkano2(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Volkano", 2)
{
    Construct();
}

DvProviderLinnCoUkVolkano2::DvProviderLinnCoUkVolkano2(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Volkano", 2)
{
    Construct();
}

void DvProviderLinnCoUkVolkano2::Construct()
{
    iPropertyDeviceInfo = NULL;
    iPropertyIpAddressList = NULL;
    iPropertyMacAddressList = NULL;
    iPropertyCoreBoardId = NULL;
}

void DvProviderLinnCoUkVolkano2::EnablePropertyDeviceInfo()
{
    iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo"));
    iService->AddProperty(iPropertyDeviceInfo); // passes ownership
}

void DvProviderLinnCoUkVolkano2::EnablePropertyIpAddressList()
{
    iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList"));
    iService->AddProperty(iPropertyIpAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2::EnablePropertyMacAddressList()
{
    iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList"));
    iService->AddProperty(iPropertyMacAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2::EnablePropertyCoreBoardId()
{
    iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId"));
    iService->AddProperty(iPropertyCoreBoardId); // passes ownership
}

void DvProviderLinnCoUkVolkano2::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionSetBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionBspType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionUglyName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionIpAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddress");
    action->AddOutputParameter(new ParameterString("aIpAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionIpAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddressList");
    action->AddOutputParameter(new ParameterRelated("aIpAddressList", *iPropertyIpAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoIpAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionMacAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionMacAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddressList");
    action->AddOutputParameter(new ParameterRelated("aMacAddressList", *iPropertyMacAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoMacAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionProductId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionBoardType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionMaxBoards()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionSoftwareVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionSoftwareUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionDeviceInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterRelated("aDeviceInfoXml", *iPropertyDeviceInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::EnableActionCoreBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CoreBoardId");
    action->AddOutputParameter(new ParameterRelated("aCoreBoardId", *iPropertyCoreBoardId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2::DoCoreBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Reboot(invocation);
}

void DvProviderLinnCoUkVolkano2::DoBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMode(aInvocation, "aMode");
    BootMode(invocation, respaMode);
}

void DvProviderLinnCoUkVolkano2::DoSetBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz aMode;
    aInvocation.InvocationReadString("aMode", aMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetBootMode(invocation, aMode);
}

void DvProviderLinnCoUkVolkano2::DoBspType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBspType(aInvocation, "aBspType");
    BspType(invocation, respaBspType);
}

void DvProviderLinnCoUkVolkano2::DoUglyName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaUglyName(aInvocation, "aUglyName");
    UglyName(invocation, respaUglyName);
}

void DvProviderLinnCoUkVolkano2::DoIpAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaIpAddress(aInvocation, "aIpAddress");
    IpAddress(invocation, respaIpAddress);
}

void DvProviderLinnCoUkVolkano2::DoIpAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaIpAddressList(aInvocation, "aIpAddressList");
    IpAddressList(invocation, respaIpAddressList);
}

void DvProviderLinnCoUkVolkano2::DoMacAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMacAddress(aInvocation, "aMacAddress");
    MacAddress(invocation, respaMacAddress);
}

void DvProviderLinnCoUkVolkano2::DoMacAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMacAddressList(aInvocation, "aMacAddressList");
    MacAddressList(invocation, respaMacAddressList);
}

void DvProviderLinnCoUkVolkano2::DoProductId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaProductNumber(aInvocation, "aProductNumber");
    ProductId(invocation, respaProductNumber);
}

void DvProviderLinnCoUkVolkano2::DoBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardId(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano2::DoBoardType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardType(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano2::DoMaxBoards(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaMaxBoards(aInvocation, "aMaxBoards");
    MaxBoards(invocation, respaMaxBoards);
}

void DvProviderLinnCoUkVolkano2::DoSoftwareVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareVersion(invocation, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano2::DoSoftwareUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respaAvailable(aInvocation, "aAvailable");
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareUpdate(invocation, respaAvailable, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano2::DoDeviceInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaDeviceInfoXml(aInvocation, "aDeviceInfoXml");
    DeviceInfo(invocation, respaDeviceInfoXml);
}

void DvProviderLinnCoUkVolkano2::DoCoreBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaCoreBoardId(aInvocation, "aCoreBoardId");
    CoreBoardId(invocation, respaCoreBoardId);
}

void DvProviderLinnCoUkVolkano2::Reboot(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::BootMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::SetBootMode(IDvInvocation& /*aResponse*/, const Brx& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::BspType(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaBspType*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::UglyName(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaUglyName*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::IpAddress(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaIpAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::IpAddressList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaIpAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::MacAddress(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMacAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::MacAddressList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMacAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::ProductId(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaProductNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::BoardId(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::BoardType(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::MaxBoards(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aaMaxBoards*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::SoftwareVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::SoftwareUpdate(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aaAvailable*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::DeviceInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaDeviceInfoXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2::CoreBoardId(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaCoreBoardId*/)
{
    ASSERTS();
}

