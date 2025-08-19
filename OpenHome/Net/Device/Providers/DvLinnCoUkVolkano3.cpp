#include "DvLinnCoUkVolkano3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkVolkano3::SetPropertyDeviceInfo(const Brx& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    return SetPropertyString(*iPropertyDeviceInfo, aValue);
}

void DvProviderLinnCoUkVolkano3::GetPropertyDeviceInfo(Brhz& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    aValue.Set(iPropertyDeviceInfo->Value());
}

TBool DvProviderLinnCoUkVolkano3::SetPropertyIpAddress(const Brx& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    return SetPropertyString(*iPropertyIpAddress, aValue);
}

void DvProviderLinnCoUkVolkano3::GetPropertyIpAddress(Brhz& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    aValue.Set(iPropertyIpAddress->Value());
}

TBool DvProviderLinnCoUkVolkano3::SetPropertyIpAddressList(const Brx& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    return SetPropertyString(*iPropertyIpAddressList, aValue);
}

void DvProviderLinnCoUkVolkano3::GetPropertyIpAddressList(Brhz& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    aValue.Set(iPropertyIpAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano3::SetPropertyMacAddressList(const Brx& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    return SetPropertyString(*iPropertyMacAddressList, aValue);
}

void DvProviderLinnCoUkVolkano3::GetPropertyMacAddressList(Brhz& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    aValue.Set(iPropertyMacAddressList->Value());
}

TBool DvProviderLinnCoUkVolkano3::SetPropertyCoreBoardId(const Brx& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    return SetPropertyString(*iPropertyCoreBoardId, aValue);
}

void DvProviderLinnCoUkVolkano3::GetPropertyCoreBoardId(Brhz& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    aValue.Set(iPropertyCoreBoardId->Value());
}

DvProviderLinnCoUkVolkano3::DvProviderLinnCoUkVolkano3(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Volkano", 3)
{
    Construct();
}

DvProviderLinnCoUkVolkano3::DvProviderLinnCoUkVolkano3(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Volkano", 3)
{
    Construct();
}

void DvProviderLinnCoUkVolkano3::Construct()
{
    iPropertyDeviceInfo = NULL;
    iPropertyIpAddress = NULL;
    iPropertyIpAddressList = NULL;
    iPropertyMacAddressList = NULL;
    iPropertyCoreBoardId = NULL;
}

void DvProviderLinnCoUkVolkano3::EnablePropertyDeviceInfo()
{
    iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo"));
    iService->AddProperty(iPropertyDeviceInfo); // passes ownership
}

void DvProviderLinnCoUkVolkano3::EnablePropertyIpAddress()
{
    iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress"));
    iService->AddProperty(iPropertyIpAddress); // passes ownership
}

void DvProviderLinnCoUkVolkano3::EnablePropertyIpAddressList()
{
    iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList"));
    iService->AddProperty(iPropertyIpAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano3::EnablePropertyMacAddressList()
{
    iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList"));
    iService->AddProperty(iPropertyMacAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano3::EnablePropertyCoreBoardId()
{
    iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId"));
    iService->AddProperty(iPropertyCoreBoardId); // passes ownership
}

void DvProviderLinnCoUkVolkano3::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionSetBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionBspType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionUglyName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionIpAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddress");
    action->AddOutputParameter(new ParameterRelated("aIpAddress", *iPropertyIpAddress));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionIpAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddressList");
    action->AddOutputParameter(new ParameterRelated("aIpAddressList", *iPropertyIpAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoIpAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionMacAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionMacAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddressList");
    action->AddOutputParameter(new ParameterRelated("aMacAddressList", *iPropertyMacAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoMacAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionProductId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionBoardType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionMaxBoards()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionSoftwareVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionSoftwareUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionDeviceInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterRelated("aDeviceInfoXml", *iPropertyDeviceInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::EnableActionCoreBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CoreBoardId");
    action->AddOutputParameter(new ParameterRelated("aCoreBoardId", *iPropertyCoreBoardId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano3::DoCoreBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano3::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Reboot(invocation);
}

void DvProviderLinnCoUkVolkano3::DoBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMode(aInvocation, "aMode");
    BootMode(invocation, respaMode);
}

void DvProviderLinnCoUkVolkano3::DoSetBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz aMode;
    aInvocation.InvocationReadString("aMode", aMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetBootMode(invocation, aMode);
}

void DvProviderLinnCoUkVolkano3::DoBspType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBspType(aInvocation, "aBspType");
    BspType(invocation, respaBspType);
}

void DvProviderLinnCoUkVolkano3::DoUglyName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaUglyName(aInvocation, "aUglyName");
    UglyName(invocation, respaUglyName);
}

void DvProviderLinnCoUkVolkano3::DoIpAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaIpAddress(aInvocation, "aIpAddress");
    IpAddress(invocation, respaIpAddress);
}

void DvProviderLinnCoUkVolkano3::DoIpAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaIpAddressList(aInvocation, "aIpAddressList");
    IpAddressList(invocation, respaIpAddressList);
}

void DvProviderLinnCoUkVolkano3::DoMacAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMacAddress(aInvocation, "aMacAddress");
    MacAddress(invocation, respaMacAddress);
}

void DvProviderLinnCoUkVolkano3::DoMacAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaMacAddressList(aInvocation, "aMacAddressList");
    MacAddressList(invocation, respaMacAddressList);
}

void DvProviderLinnCoUkVolkano3::DoProductId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaProductNumber(aInvocation, "aProductNumber");
    ProductId(invocation, respaProductNumber);
}

void DvProviderLinnCoUkVolkano3::DoBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardId(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano3::DoBoardType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaBoardNumber(aInvocation, "aBoardNumber");
    BoardType(invocation, aIndex, respaBoardNumber);
}

void DvProviderLinnCoUkVolkano3::DoMaxBoards(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respaMaxBoards(aInvocation, "aMaxBoards");
    MaxBoards(invocation, respaMaxBoards);
}

void DvProviderLinnCoUkVolkano3::DoSoftwareVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareVersion(invocation, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano3::DoSoftwareUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respaAvailable(aInvocation, "aAvailable");
    DviInvocationResponseString respaSoftwareVersion(aInvocation, "aSoftwareVersion");
    SoftwareUpdate(invocation, respaAvailable, respaSoftwareVersion);
}

void DvProviderLinnCoUkVolkano3::DoDeviceInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaDeviceInfoXml(aInvocation, "aDeviceInfoXml");
    DeviceInfo(invocation, respaDeviceInfoXml);
}

void DvProviderLinnCoUkVolkano3::DoCoreBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaCoreBoardId(aInvocation, "aCoreBoardId");
    CoreBoardId(invocation, respaCoreBoardId);
}

void DvProviderLinnCoUkVolkano3::Reboot(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::BootMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::SetBootMode(IDvInvocation& /*aResponse*/, const Brx& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::BspType(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaBspType*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::UglyName(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaUglyName*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::IpAddress(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaIpAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::IpAddressList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaIpAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::MacAddress(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMacAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::MacAddressList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaMacAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::ProductId(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaProductNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::BoardId(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::BoardType(IDvInvocation& /*aResponse*/, TUint /*aaIndex*/, IDvInvocationResponseString& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::MaxBoards(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aaMaxBoards*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::SoftwareVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::SoftwareUpdate(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aaAvailable*/, IDvInvocationResponseString& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::DeviceInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaDeviceInfoXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano3::CoreBoardId(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaCoreBoardId*/)
{
    ASSERTS();
}

