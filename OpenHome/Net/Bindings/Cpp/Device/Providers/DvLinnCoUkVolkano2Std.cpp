#include "DvLinnCoUkVolkano2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkVolkano2Cpp::SetPropertyDeviceInfo(const std::string& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceInfo, buf);
}

void DvProviderLinnCoUkVolkano2Cpp::GetPropertyDeviceInfo(std::string& aValue)
{
    ASSERT(iPropertyDeviceInfo != NULL);
    const Brx& val = iPropertyDeviceInfo->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkVolkano2Cpp::SetPropertyIpAddressList(const std::string& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyIpAddressList, buf);
}

void DvProviderLinnCoUkVolkano2Cpp::GetPropertyIpAddressList(std::string& aValue)
{
    ASSERT(iPropertyIpAddressList != NULL);
    const Brx& val = iPropertyIpAddressList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkVolkano2Cpp::SetPropertyMacAddressList(const std::string& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyMacAddressList, buf);
}

void DvProviderLinnCoUkVolkano2Cpp::GetPropertyMacAddressList(std::string& aValue)
{
    ASSERT(iPropertyMacAddressList != NULL);
    const Brx& val = iPropertyMacAddressList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkVolkano2Cpp::SetPropertyCoreBoardId(const std::string& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyCoreBoardId, buf);
}

void DvProviderLinnCoUkVolkano2Cpp::GetPropertyCoreBoardId(std::string& aValue)
{
    ASSERT(iPropertyCoreBoardId != NULL);
    const Brx& val = iPropertyCoreBoardId->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkVolkano2Cpp::DvProviderLinnCoUkVolkano2Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Volkano", 2)
{
    iPropertyDeviceInfo = NULL;
    iPropertyIpAddressList = NULL;
    iPropertyMacAddressList = NULL;
    iPropertyCoreBoardId = NULL;
}

void DvProviderLinnCoUkVolkano2Cpp::EnablePropertyDeviceInfo()
{
    iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo"));
    iService->AddProperty(iPropertyDeviceInfo); // passes ownership
}

void DvProviderLinnCoUkVolkano2Cpp::EnablePropertyIpAddressList()
{
    iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList"));
    iService->AddProperty(iPropertyIpAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2Cpp::EnablePropertyMacAddressList()
{
    iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList"));
    iService->AddProperty(iPropertyMacAddressList); // passes ownership
}

void DvProviderLinnCoUkVolkano2Cpp::EnablePropertyCoreBoardId()
{
    iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId"));
    iService->AddProperty(iPropertyCoreBoardId); // passes ownership
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionSetBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionBspType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionUglyName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionIpAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddress");
    action->AddOutputParameter(new ParameterString("aIpAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionIpAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IpAddressList");
    action->AddOutputParameter(new ParameterRelated("aIpAddressList", *iPropertyIpAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoIpAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionMacAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionMacAddressList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddressList");
    action->AddOutputParameter(new ParameterRelated("aMacAddressList", *iPropertyMacAddressList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoMacAddressList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionProductId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionBoardType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionMaxBoards()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionSoftwareVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionSoftwareUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionDeviceInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterRelated("aDeviceInfoXml", *iPropertyDeviceInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::EnableActionCoreBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CoreBoardId");
    action->AddOutputParameter(new ParameterRelated("aCoreBoardId", *iPropertyCoreBoardId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano2Cpp::DoCoreBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano2Cpp::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Reboot(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaMode;
    DvInvocationStd invocation(aInvocation);
    BootMode(invocation, respaMode);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraMode(aInvocation, "aMode");
    Brn buf_aMode((const TByte*)respaMode.c_str(), (TUint)respaMode.length());
    respWriteraMode.Write(buf_aMode);
    aInvocation.InvocationWriteStringEnd("aMode");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoSetBootMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_aMode;
    aInvocation.InvocationReadString("aMode", buf_aMode);
    std::string aMode((const char*)buf_aMode.Ptr(), buf_aMode.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetBootMode(invocation, aMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoBspType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaBspType;
    DvInvocationStd invocation(aInvocation);
    BspType(invocation, respaBspType);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraBspType(aInvocation, "aBspType");
    Brn buf_aBspType((const TByte*)respaBspType.c_str(), (TUint)respaBspType.length());
    respWriteraBspType.Write(buf_aBspType);
    aInvocation.InvocationWriteStringEnd("aBspType");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoUglyName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaUglyName;
    DvInvocationStd invocation(aInvocation);
    UglyName(invocation, respaUglyName);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraUglyName(aInvocation, "aUglyName");
    Brn buf_aUglyName((const TByte*)respaUglyName.c_str(), (TUint)respaUglyName.length());
    respWriteraUglyName.Write(buf_aUglyName);
    aInvocation.InvocationWriteStringEnd("aUglyName");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoIpAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaIpAddress;
    DvInvocationStd invocation(aInvocation);
    IpAddress(invocation, respaIpAddress);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraIpAddress(aInvocation, "aIpAddress");
    Brn buf_aIpAddress((const TByte*)respaIpAddress.c_str(), (TUint)respaIpAddress.length());
    respWriteraIpAddress.Write(buf_aIpAddress);
    aInvocation.InvocationWriteStringEnd("aIpAddress");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoIpAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaIpAddressList;
    DvInvocationStd invocation(aInvocation);
    IpAddressList(invocation, respaIpAddressList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraIpAddressList(aInvocation, "aIpAddressList");
    Brn buf_aIpAddressList((const TByte*)respaIpAddressList.c_str(), (TUint)respaIpAddressList.length());
    respWriteraIpAddressList.Write(buf_aIpAddressList);
    aInvocation.InvocationWriteStringEnd("aIpAddressList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoMacAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaMacAddress;
    DvInvocationStd invocation(aInvocation);
    MacAddress(invocation, respaMacAddress);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraMacAddress(aInvocation, "aMacAddress");
    Brn buf_aMacAddress((const TByte*)respaMacAddress.c_str(), (TUint)respaMacAddress.length());
    respWriteraMacAddress.Write(buf_aMacAddress);
    aInvocation.InvocationWriteStringEnd("aMacAddress");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoMacAddressList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaMacAddressList;
    DvInvocationStd invocation(aInvocation);
    MacAddressList(invocation, respaMacAddressList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraMacAddressList(aInvocation, "aMacAddressList");
    Brn buf_aMacAddressList((const TByte*)respaMacAddressList.c_str(), (TUint)respaMacAddressList.length());
    respWriteraMacAddressList.Write(buf_aMacAddressList);
    aInvocation.InvocationWriteStringEnd("aMacAddressList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoProductId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaProductNumber;
    DvInvocationStd invocation(aInvocation);
    ProductId(invocation, respaProductNumber);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraProductNumber(aInvocation, "aProductNumber");
    Brn buf_aProductNumber((const TByte*)respaProductNumber.c_str(), (TUint)respaProductNumber.length());
    respWriteraProductNumber.Write(buf_aProductNumber);
    aInvocation.InvocationWriteStringEnd("aProductNumber");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    std::string respaBoardNumber;
    DvInvocationStd invocation(aInvocation);
    BoardId(invocation, aIndex, respaBoardNumber);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraBoardNumber(aInvocation, "aBoardNumber");
    Brn buf_aBoardNumber((const TByte*)respaBoardNumber.c_str(), (TUint)respaBoardNumber.length());
    respWriteraBoardNumber.Write(buf_aBoardNumber);
    aInvocation.InvocationWriteStringEnd("aBoardNumber");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoBoardType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t aIndex = aInvocation.InvocationReadUint("aIndex");
    aInvocation.InvocationReadEnd();
    std::string respaBoardNumber;
    DvInvocationStd invocation(aInvocation);
    BoardType(invocation, aIndex, respaBoardNumber);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraBoardNumber(aInvocation, "aBoardNumber");
    Brn buf_aBoardNumber((const TByte*)respaBoardNumber.c_str(), (TUint)respaBoardNumber.length());
    respWriteraBoardNumber.Write(buf_aBoardNumber);
    aInvocation.InvocationWriteStringEnd("aBoardNumber");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoMaxBoards(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respaMaxBoards;
    DvInvocationStd invocation(aInvocation);
    MaxBoards(invocation, respaMaxBoards);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriteraMaxBoards(aInvocation, "aMaxBoards");
    respWriteraMaxBoards.Write(respaMaxBoards);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoSoftwareVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaSoftwareVersion;
    DvInvocationStd invocation(aInvocation);
    SoftwareVersion(invocation, respaSoftwareVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraSoftwareVersion(aInvocation, "aSoftwareVersion");
    Brn buf_aSoftwareVersion((const TByte*)respaSoftwareVersion.c_str(), (TUint)respaSoftwareVersion.length());
    respWriteraSoftwareVersion.Write(buf_aSoftwareVersion);
    aInvocation.InvocationWriteStringEnd("aSoftwareVersion");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoSoftwareUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respaAvailable;
    std::string respaSoftwareVersion;
    DvInvocationStd invocation(aInvocation);
    SoftwareUpdate(invocation, respaAvailable, respaSoftwareVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriteraAvailable(aInvocation, "aAvailable");
    respWriteraAvailable.Write(respaAvailable);
    DviInvocationResponseString respWriteraSoftwareVersion(aInvocation, "aSoftwareVersion");
    Brn buf_aSoftwareVersion((const TByte*)respaSoftwareVersion.c_str(), (TUint)respaSoftwareVersion.length());
    respWriteraSoftwareVersion.Write(buf_aSoftwareVersion);
    aInvocation.InvocationWriteStringEnd("aSoftwareVersion");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoDeviceInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaDeviceInfoXml;
    DvInvocationStd invocation(aInvocation);
    DeviceInfo(invocation, respaDeviceInfoXml);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraDeviceInfoXml(aInvocation, "aDeviceInfoXml");
    Brn buf_aDeviceInfoXml((const TByte*)respaDeviceInfoXml.c_str(), (TUint)respaDeviceInfoXml.length());
    respWriteraDeviceInfoXml.Write(buf_aDeviceInfoXml);
    aInvocation.InvocationWriteStringEnd("aDeviceInfoXml");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::DoCoreBoardId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaCoreBoardId;
    DvInvocationStd invocation(aInvocation);
    CoreBoardId(invocation, respaCoreBoardId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraCoreBoardId(aInvocation, "aCoreBoardId");
    Brn buf_aCoreBoardId((const TByte*)respaCoreBoardId.c_str(), (TUint)respaCoreBoardId.length());
    respWriteraCoreBoardId.Write(buf_aCoreBoardId);
    aInvocation.InvocationWriteStringEnd("aCoreBoardId");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano2Cpp::Reboot(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::BootMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::SetBootMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::BspType(IDvInvocationStd& /*aInvocation*/, std::string& /*aaBspType*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::UglyName(IDvInvocationStd& /*aInvocation*/, std::string& /*aaUglyName*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::IpAddress(IDvInvocationStd& /*aInvocation*/, std::string& /*aaIpAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::IpAddressList(IDvInvocationStd& /*aInvocation*/, std::string& /*aaIpAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::MacAddress(IDvInvocationStd& /*aInvocation*/, std::string& /*aaMacAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::MacAddressList(IDvInvocationStd& /*aInvocation*/, std::string& /*aaMacAddressList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::ProductId(IDvInvocationStd& /*aInvocation*/, std::string& /*aaProductNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::BoardId(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaIndex*/, std::string& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::BoardType(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaIndex*/, std::string& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::MaxBoards(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aaMaxBoards*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::SoftwareVersion(IDvInvocationStd& /*aInvocation*/, std::string& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::SoftwareUpdate(IDvInvocationStd& /*aInvocation*/, bool& /*aaAvailable*/, std::string& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::DeviceInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aaDeviceInfoXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano2Cpp::CoreBoardId(IDvInvocationStd& /*aInvocation*/, std::string& /*aaCoreBoardId*/)
{
    ASSERTS();
}

