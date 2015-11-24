#include "DvLinnCoUkVolkano1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderLinnCoUkVolkano1Cpp::DvProviderLinnCoUkVolkano1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Volkano", 1)
{
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionSetBootMode()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoSetBootMode);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionBspType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BspType");
    action->AddOutputParameter(new ParameterString("aBspType"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoBspType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionUglyName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UglyName");
    action->AddOutputParameter(new ParameterString("aUglyName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoUglyName);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionMacAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MacAddress");
    action->AddOutputParameter(new ParameterString("aMacAddress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoMacAddress);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionProductId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProductId");
    action->AddOutputParameter(new ParameterString("aProductNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoProductId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionBoardId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardId");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoBoardId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionBoardType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BoardType");
    action->AddInputParameter(new ParameterUint("aIndex"));
    action->AddOutputParameter(new ParameterString("aBoardNumber"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoBoardType);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionMaxBoards()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("MaxBoards");
    action->AddOutputParameter(new ParameterUint("aMaxBoards"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoMaxBoards);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionSoftwareVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareVersion");
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoSoftwareVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionSoftwareUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SoftwareUpdate");
    action->AddOutputParameter(new ParameterBool("aAvailable"));
    action->AddOutputParameter(new ParameterString("aSoftwareVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoSoftwareUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::EnableActionDeviceInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceInfo");
    action->AddOutputParameter(new ParameterString("aDeviceInfoXml"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkVolkano1Cpp::DoDeviceInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkVolkano1Cpp::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Reboot(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkVolkano1Cpp::DoBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoSetBootMode(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoBspType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoUglyName(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoMacAddress(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoProductId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoBoardId(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoBoardType(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoMaxBoards(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoSoftwareVersion(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoSoftwareUpdate(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::DoDeviceInfo(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkVolkano1Cpp::Reboot(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::BootMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::SetBootMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aaMode*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::BspType(IDvInvocationStd& /*aInvocation*/, std::string& /*aaBspType*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::UglyName(IDvInvocationStd& /*aInvocation*/, std::string& /*aaUglyName*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::MacAddress(IDvInvocationStd& /*aInvocation*/, std::string& /*aaMacAddress*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::ProductId(IDvInvocationStd& /*aInvocation*/, std::string& /*aaProductNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::BoardId(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaIndex*/, std::string& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::BoardType(IDvInvocationStd& /*aInvocation*/, uint32_t /*aaIndex*/, std::string& /*aaBoardNumber*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::MaxBoards(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aaMaxBoards*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::SoftwareVersion(IDvInvocationStd& /*aInvocation*/, std::string& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::SoftwareUpdate(IDvInvocationStd& /*aInvocation*/, bool& /*aaAvailable*/, std::string& /*aaSoftwareVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkVolkano1Cpp::DeviceInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aaDeviceInfoXml*/)
{
    ASSERTS();
}

