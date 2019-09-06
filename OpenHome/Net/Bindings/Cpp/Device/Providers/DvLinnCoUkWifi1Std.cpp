#include "DvLinnCoUkWifi1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkWifi1Cpp::SetPropertyAdapterInUse(bool aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    return SetPropertyBool(*iPropertyAdapterInUse, aValue);
}

void DvProviderLinnCoUkWifi1Cpp::GetPropertyAdapterInUse(bool& aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    aValue = iPropertyAdapterInUse->Value();
}

bool DvProviderLinnCoUkWifi1Cpp::SetPropertyConfiguration(const std::string& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyConfiguration, buf);
}

void DvProviderLinnCoUkWifi1Cpp::GetPropertyConfiguration(std::string& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    const Brx& val = iPropertyConfiguration->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkWifi1Cpp::SetPropertyScanResults(const std::string& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyScanResults, buf);
}

void DvProviderLinnCoUkWifi1Cpp::GetPropertyScanResults(std::string& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    const Brx& val = iPropertyScanResults->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkWifi1Cpp::SetPropertyStatus(const std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyStatus, buf);
}

void DvProviderLinnCoUkWifi1Cpp::GetPropertyStatus(std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    const Brx& val = iPropertyStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkWifi1Cpp::DvProviderLinnCoUkWifi1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Wifi", 1)
{
    iPropertyAdapterInUse = NULL;
    iPropertyConfiguration = NULL;
    iPropertyScanResults = NULL;
    iPropertyStatus = NULL;
}

void DvProviderLinnCoUkWifi1Cpp::EnablePropertyAdapterInUse()
{
    iPropertyAdapterInUse = new PropertyBool(new ParameterBool("AdapterInUse"));
    iService->AddProperty(iPropertyAdapterInUse); // passes ownership
}

void DvProviderLinnCoUkWifi1Cpp::EnablePropertyConfiguration()
{
    iPropertyConfiguration = new PropertyString(new ParameterString("Configuration"));
    iService->AddProperty(iPropertyConfiguration); // passes ownership
}

void DvProviderLinnCoUkWifi1Cpp::EnablePropertyScanResults()
{
    iPropertyScanResults = new PropertyString(new ParameterString("ScanResults"));
    iService->AddProperty(iPropertyScanResults); // passes ownership
}

void DvProviderLinnCoUkWifi1Cpp::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionClearCredentials()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearCredentials");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoClearCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetAdapterInUse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAdapterInUse");
    action->AddOutputParameter(new ParameterRelated("AdapterInUse", *iPropertyAdapterInUse));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetAdapterInUse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetConfiguration()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConfiguration");
    action->AddOutputParameter(new ParameterRelated("Configuration", *iPropertyConfiguration));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetConfiguration);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetNetworkInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetworkInfo");
    action->AddOutputParameter(new ParameterString("NetworkInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetNetworkInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetScanResults()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanResults");
    action->AddOutputParameter(new ParameterRelated("ScanResults", *iPropertyScanResults));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetScanResults);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetSignalInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSignalInfo");
    action->AddOutputParameter(new ParameterString("SignalInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetSignalInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionGetStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoGetStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionScan()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Scan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoScan);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::EnableActionSetCredentials()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetCredentials");
    action->AddInputParameter(new ParameterString("Ssid"));
    action->AddInputParameter(new ParameterString("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1Cpp::DoSetCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1Cpp::DoClearCredentials(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearCredentials(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetAdapterInUse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respAdapterInUse;
    DvInvocationStd invocation(aInvocation);
    GetAdapterInUse(invocation, respAdapterInUse);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterAdapterInUse(aInvocation, "AdapterInUse");
    respWriterAdapterInUse.Write(respAdapterInUse);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetConfiguration(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respConfiguration;
    DvInvocationStd invocation(aInvocation);
    GetConfiguration(invocation, respConfiguration);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterConfiguration(aInvocation, "Configuration");
    Brn buf_Configuration((const TByte*)respConfiguration.c_str(), (TUint)respConfiguration.length());
    respWriterConfiguration.Write(buf_Configuration);
    aInvocation.InvocationWriteStringEnd("Configuration");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetNetworkInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respNetworkInfo;
    DvInvocationStd invocation(aInvocation);
    GetNetworkInfo(invocation, respNetworkInfo);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNetworkInfo(aInvocation, "NetworkInfo");
    Brn buf_NetworkInfo((const TByte*)respNetworkInfo.c_str(), (TUint)respNetworkInfo.length());
    respWriterNetworkInfo.Write(buf_NetworkInfo);
    aInvocation.InvocationWriteStringEnd("NetworkInfo");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetScanResults(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respScanResults;
    DvInvocationStd invocation(aInvocation);
    GetScanResults(invocation, respScanResults);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterScanResults(aInvocation, "ScanResults");
    Brn buf_ScanResults((const TByte*)respScanResults.c_str(), (TUint)respScanResults.length());
    respWriterScanResults.Write(buf_ScanResults);
    aInvocation.InvocationWriteStringEnd("ScanResults");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetSignalInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSignalInfo;
    DvInvocationStd invocation(aInvocation);
    GetSignalInfo(invocation, respSignalInfo);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSignalInfo(aInvocation, "SignalInfo");
    Brn buf_SignalInfo((const TByte*)respSignalInfo.c_str(), (TUint)respSignalInfo.length());
    respWriterSignalInfo.Write(buf_SignalInfo);
    aInvocation.InvocationWriteStringEnd("SignalInfo");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoGetStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respStatus;
    DvInvocationStd invocation(aInvocation);
    GetStatus(invocation, respStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterStatus(aInvocation, "Status");
    Brn buf_Status((const TByte*)respStatus.c_str(), (TUint)respStatus.length());
    respWriterStatus.Write(buf_Status);
    aInvocation.InvocationWriteStringEnd("Status");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoScan(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Scan(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::DoSetCredentials(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Ssid;
    aInvocation.InvocationReadString("Ssid", buf_Ssid);
    std::string Ssid((const char*)buf_Ssid.Ptr(), buf_Ssid.Bytes());
    Brhz buf_Password;
    aInvocation.InvocationReadString("Password", buf_Password);
    std::string Password((const char*)buf_Password.Ptr(), buf_Password.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetCredentials(invocation, Ssid, Password);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkWifi1Cpp::ClearCredentials(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetAdapterInUse(IDvInvocationStd& /*aInvocation*/, bool& /*aAdapterInUse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetConfiguration(IDvInvocationStd& /*aInvocation*/, std::string& /*aConfiguration*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetNetworkInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aNetworkInfo*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetScanResults(IDvInvocationStd& /*aInvocation*/, std::string& /*aScanResults*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetSignalInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aSignalInfo*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::GetStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::Scan(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1Cpp::SetCredentials(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSsid*/, const std::string& /*aPassword*/)
{
    ASSERTS();
}

