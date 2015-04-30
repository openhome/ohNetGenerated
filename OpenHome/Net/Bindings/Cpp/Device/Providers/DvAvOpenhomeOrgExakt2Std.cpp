#include "DvAvOpenhomeOrgExakt2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgExakt2Cpp::SetPropertyDeviceList(const std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceList, buf);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::GetPropertyDeviceList(std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    const Brx& val = iPropertyDeviceList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt2Cpp::SetPropertyConnectionStatus(const std::string& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyConnectionStatus, buf);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::GetPropertyConnectionStatus(std::string& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    const Brx& val = iPropertyConnectionStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt2Cpp::SetPropertyVersion(const std::string& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyVersion, buf);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::GetPropertyVersion(std::string& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    const Brx& val = iPropertyVersion->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgExakt2Cpp::DvProviderAvOpenhomeOrgExakt2Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 2)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyVersion = NULL;
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2Cpp::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respList;
    DvInvocationStd invocation(aInvocation);
    DeviceList(invocation, respList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterList(aInvocation, "List");
    Brn buf_List((const TByte*)respList.c_str(), (TUint)respList.length());
    respWriterList.Write(buf_List);
    aInvocation.InvocationWriteStringEnd("List");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respSettings;
    DvInvocationStd invocation(aInvocation);
    DeviceSettings(invocation, DeviceId, respSettings);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSettings(aInvocation, "Settings");
    Brn buf_Settings((const TByte*)respSettings.c_str(), (TUint)respSettings.length());
    respWriterSettings.Write(buf_Settings);
    aInvocation.InvocationWriteStringEnd("Settings");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respConnectionStatus;
    DvInvocationStd invocation(aInvocation);
    ConnectionStatus(invocation, respConnectionStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterConnectionStatus(aInvocation, "ConnectionStatus");
    Brn buf_ConnectionStatus((const TByte*)respConnectionStatus.c_str(), (TUint)respConnectionStatus.length());
    respWriterConnectionStatus.Write(buf_ConnectionStatus);
    aInvocation.InvocationWriteStringEnd("ConnectionStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoSet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    uint32_t BankId = aInvocation.InvocationReadUint("BankId");
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    bool Mute = aInvocation.InvocationReadBool("Mute");
    bool Persist = aInvocation.InvocationReadBool("Persist");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Set(invocation, DeviceId, BankId, FileUri, Mute, Persist);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoReprogram(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Reprogram(invocation, DeviceId, FileUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoReprogramFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ReprogramFallback(invocation, DeviceId, FileUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respVersion;
    DvInvocationStd invocation(aInvocation);
    Version(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterVersion(aInvocation, "Version");
    Brn buf_Version((const TByte*)respVersion.c_str(), (TUint)respVersion.length());
    respWriterVersion.Write(buf_Version);
    aInvocation.InvocationWriteStringEnd("Version");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DeviceList(IDvInvocationStd& /*aInvocation*/, std::string& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::DeviceSettings(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, std::string& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::ConnectionStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::Set(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, uint32_t /*aBankId*/, const std::string& /*aFileUri*/, bool /*aMute*/, bool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::Reprogram(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, const std::string& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::ReprogramFallback(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, const std::string& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2Cpp::Version(IDvInvocationStd& /*aInvocation*/, std::string& /*aVersion*/)
{
    ASSERTS();
}

