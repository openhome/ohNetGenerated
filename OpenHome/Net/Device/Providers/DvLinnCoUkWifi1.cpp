#include "DvLinnCoUkWifi1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkWifi1::SetPropertyAdapterInUse(TBool aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    return SetPropertyBool(*iPropertyAdapterInUse, aValue);
}

void DvProviderLinnCoUkWifi1::GetPropertyAdapterInUse(TBool& aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    aValue = iPropertyAdapterInUse->Value();
}

TBool DvProviderLinnCoUkWifi1::SetPropertyConfiguration(const Brx& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    return SetPropertyString(*iPropertyConfiguration, aValue);
}

void DvProviderLinnCoUkWifi1::GetPropertyConfiguration(Brhz& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    aValue.Set(iPropertyConfiguration->Value());
}

TBool DvProviderLinnCoUkWifi1::SetPropertyScanResults(const Brx& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    return SetPropertyString(*iPropertyScanResults, aValue);
}

void DvProviderLinnCoUkWifi1::GetPropertyScanResults(Brhz& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    aValue.Set(iPropertyScanResults->Value());
}

TBool DvProviderLinnCoUkWifi1::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderLinnCoUkWifi1::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

DvProviderLinnCoUkWifi1::DvProviderLinnCoUkWifi1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Wifi", 1)
{
    Construct();
}

DvProviderLinnCoUkWifi1::DvProviderLinnCoUkWifi1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Wifi", 1)
{
    Construct();
}

void DvProviderLinnCoUkWifi1::Construct()
{
    iPropertyAdapterInUse = NULL;
    iPropertyConfiguration = NULL;
    iPropertyScanResults = NULL;
    iPropertyStatus = NULL;
}

void DvProviderLinnCoUkWifi1::EnablePropertyAdapterInUse()
{
    iPropertyAdapterInUse = new PropertyBool(new ParameterBool("AdapterInUse"));
    iService->AddProperty(iPropertyAdapterInUse); // passes ownership
}

void DvProviderLinnCoUkWifi1::EnablePropertyConfiguration()
{
    iPropertyConfiguration = new PropertyString(new ParameterString("Configuration"));
    iService->AddProperty(iPropertyConfiguration); // passes ownership
}

void DvProviderLinnCoUkWifi1::EnablePropertyScanResults()
{
    iPropertyScanResults = new PropertyString(new ParameterString("ScanResults"));
    iService->AddProperty(iPropertyScanResults); // passes ownership
}

void DvProviderLinnCoUkWifi1::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderLinnCoUkWifi1::EnableActionClearCredentials()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearCredentials");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoClearCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetAdapterInUse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAdapterInUse");
    action->AddOutputParameter(new ParameterRelated("AdapterInUse", *iPropertyAdapterInUse));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetAdapterInUse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetConfiguration()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConfiguration");
    action->AddOutputParameter(new ParameterRelated("Configuration", *iPropertyConfiguration));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetConfiguration);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetNetworkInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetworkInfo");
    action->AddOutputParameter(new ParameterString("NetworkInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetNetworkInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetScanResults()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanResults");
    action->AddOutputParameter(new ParameterRelated("ScanResults", *iPropertyScanResults));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetScanResults);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetSignalInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSignalInfo");
    action->AddOutputParameter(new ParameterString("SignalInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetSignalInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionGetStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoGetStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionScan()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Scan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoScan);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::EnableActionSetCredentials()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetCredentials");
    action->AddInputParameter(new ParameterString("Ssid"));
    action->AddInputParameter(new ParameterString("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1::DoSetCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1::DoClearCredentials(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearCredentials(invocation);
}

void DvProviderLinnCoUkWifi1::DoGetAdapterInUse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respAdapterInUse(aInvocation, "AdapterInUse");
    GetAdapterInUse(invocation, respAdapterInUse);
}

void DvProviderLinnCoUkWifi1::DoGetConfiguration(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respConfiguration(aInvocation, "Configuration");
    GetConfiguration(invocation, respConfiguration);
}

void DvProviderLinnCoUkWifi1::DoGetNetworkInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respNetworkInfo(aInvocation, "NetworkInfo");
    GetNetworkInfo(invocation, respNetworkInfo);
}

void DvProviderLinnCoUkWifi1::DoGetScanResults(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respScanResults(aInvocation, "ScanResults");
    GetScanResults(invocation, respScanResults);
}

void DvProviderLinnCoUkWifi1::DoGetSignalInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSignalInfo(aInvocation, "SignalInfo");
    GetSignalInfo(invocation, respSignalInfo);
}

void DvProviderLinnCoUkWifi1::DoGetStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respStatus(aInvocation, "Status");
    GetStatus(invocation, respStatus);
}

void DvProviderLinnCoUkWifi1::DoScan(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Scan(invocation);
}

void DvProviderLinnCoUkWifi1::DoSetCredentials(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Ssid;
    aInvocation.InvocationReadString("Ssid", Ssid);
    Brhz Password;
    aInvocation.InvocationReadString("Password", Password);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetCredentials(invocation, Ssid, Password);
}

void DvProviderLinnCoUkWifi1::ClearCredentials(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetAdapterInUse(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aAdapterInUse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetConfiguration(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aConfiguration*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetNetworkInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aNetworkInfo*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetScanResults(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aScanResults*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetSignalInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSignalInfo*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::GetStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::Scan(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkWifi1::SetCredentials(IDvInvocation& /*aResponse*/, const Brx& /*aSsid*/, const Brx& /*aPassword*/)
{
    ASSERTS();
}

