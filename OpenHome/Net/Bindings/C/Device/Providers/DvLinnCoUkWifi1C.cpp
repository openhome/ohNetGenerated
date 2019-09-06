#include "DvLinnCoUkWifi1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderLinnCoUkWifi1C : public DvProvider
{
public:
    DvProviderLinnCoUkWifi1C(DvDeviceC aDevice);
    TBool SetPropertyAdapterInUse(TBool aValue);
    void GetPropertyAdapterInUse(TBool& aValue);
    TBool SetPropertyConfiguration(const Brx& aValue);
    void GetPropertyConfiguration(Brhz& aValue);
    TBool SetPropertyScanResults(const Brx& aValue);
    void GetPropertyScanResults(Brhz& aValue);
    TBool SetPropertyStatus(const Brx& aValue);
    void GetPropertyStatus(Brhz& aValue);
    void EnablePropertyAdapterInUse();
    void EnablePropertyConfiguration();
    void EnablePropertyScanResults();
    void EnablePropertyStatus();
    void EnableActionClearCredentials(CallbackWifi1ClearCredentials aCallback, void* aPtr);
    void EnableActionGetAdapterInUse(CallbackWifi1GetAdapterInUse aCallback, void* aPtr);
    void EnableActionGetConfiguration(CallbackWifi1GetConfiguration aCallback, void* aPtr);
    void EnableActionGetNetworkInfo(CallbackWifi1GetNetworkInfo aCallback, void* aPtr);
    void EnableActionGetScanResults(CallbackWifi1GetScanResults aCallback, void* aPtr);
    void EnableActionGetSignalInfo(CallbackWifi1GetSignalInfo aCallback, void* aPtr);
    void EnableActionGetStatus(CallbackWifi1GetStatus aCallback, void* aPtr);
    void EnableActionScan(CallbackWifi1Scan aCallback, void* aPtr);
    void EnableActionSetCredentials(CallbackWifi1SetCredentials aCallback, void* aPtr);
private:
    void DoClearCredentials(IDviInvocation& aInvocation);
    void DoGetAdapterInUse(IDviInvocation& aInvocation);
    void DoGetConfiguration(IDviInvocation& aInvocation);
    void DoGetNetworkInfo(IDviInvocation& aInvocation);
    void DoGetScanResults(IDviInvocation& aInvocation);
    void DoGetSignalInfo(IDviInvocation& aInvocation);
    void DoGetStatus(IDviInvocation& aInvocation);
    void DoScan(IDviInvocation& aInvocation);
    void DoSetCredentials(IDviInvocation& aInvocation);
private:
    CallbackWifi1ClearCredentials iCallbackClearCredentials;
    void* iPtrClearCredentials;
    CallbackWifi1GetAdapterInUse iCallbackGetAdapterInUse;
    void* iPtrGetAdapterInUse;
    CallbackWifi1GetConfiguration iCallbackGetConfiguration;
    void* iPtrGetConfiguration;
    CallbackWifi1GetNetworkInfo iCallbackGetNetworkInfo;
    void* iPtrGetNetworkInfo;
    CallbackWifi1GetScanResults iCallbackGetScanResults;
    void* iPtrGetScanResults;
    CallbackWifi1GetSignalInfo iCallbackGetSignalInfo;
    void* iPtrGetSignalInfo;
    CallbackWifi1GetStatus iCallbackGetStatus;
    void* iPtrGetStatus;
    CallbackWifi1Scan iCallbackScan;
    void* iPtrScan;
    CallbackWifi1SetCredentials iCallbackSetCredentials;
    void* iPtrSetCredentials;
    PropertyBool* iPropertyAdapterInUse;
    PropertyString* iPropertyConfiguration;
    PropertyString* iPropertyScanResults;
    PropertyString* iPropertyStatus;
};

DvProviderLinnCoUkWifi1C::DvProviderLinnCoUkWifi1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Wifi", 1)
{
    iPropertyAdapterInUse = NULL;
    iPropertyConfiguration = NULL;
    iPropertyScanResults = NULL;
    iPropertyStatus = NULL;
}

TBool DvProviderLinnCoUkWifi1C::SetPropertyAdapterInUse(TBool aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    return SetPropertyBool(*iPropertyAdapterInUse, aValue);
}

void DvProviderLinnCoUkWifi1C::GetPropertyAdapterInUse(TBool& aValue)
{
    ASSERT(iPropertyAdapterInUse != NULL);
    aValue = iPropertyAdapterInUse->Value();
}

TBool DvProviderLinnCoUkWifi1C::SetPropertyConfiguration(const Brx& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    return SetPropertyString(*iPropertyConfiguration, aValue);
}

void DvProviderLinnCoUkWifi1C::GetPropertyConfiguration(Brhz& aValue)
{
    ASSERT(iPropertyConfiguration != NULL);
    aValue.Set(iPropertyConfiguration->Value());
}

TBool DvProviderLinnCoUkWifi1C::SetPropertyScanResults(const Brx& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    return SetPropertyString(*iPropertyScanResults, aValue);
}

void DvProviderLinnCoUkWifi1C::GetPropertyScanResults(Brhz& aValue)
{
    ASSERT(iPropertyScanResults != NULL);
    aValue.Set(iPropertyScanResults->Value());
}

TBool DvProviderLinnCoUkWifi1C::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderLinnCoUkWifi1C::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

void DvProviderLinnCoUkWifi1C::EnablePropertyAdapterInUse()
{
    iPropertyAdapterInUse = new PropertyBool(new ParameterBool("AdapterInUse"));
    iService->AddProperty(iPropertyAdapterInUse); // passes ownership
}

void DvProviderLinnCoUkWifi1C::EnablePropertyConfiguration()
{
    iPropertyConfiguration = new PropertyString(new ParameterString("Configuration"));
    iService->AddProperty(iPropertyConfiguration); // passes ownership
}

void DvProviderLinnCoUkWifi1C::EnablePropertyScanResults()
{
    iPropertyScanResults = new PropertyString(new ParameterString("ScanResults"));
    iService->AddProperty(iPropertyScanResults); // passes ownership
}

void DvProviderLinnCoUkWifi1C::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderLinnCoUkWifi1C::EnableActionClearCredentials(CallbackWifi1ClearCredentials aCallback, void* aPtr)
{
    iCallbackClearCredentials = aCallback;
    iPtrClearCredentials = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearCredentials");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoClearCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetAdapterInUse(CallbackWifi1GetAdapterInUse aCallback, void* aPtr)
{
    iCallbackGetAdapterInUse = aCallback;
    iPtrGetAdapterInUse = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAdapterInUse");
    action->AddOutputParameter(new ParameterRelated("AdapterInUse", *iPropertyAdapterInUse));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetAdapterInUse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetConfiguration(CallbackWifi1GetConfiguration aCallback, void* aPtr)
{
    iCallbackGetConfiguration = aCallback;
    iPtrGetConfiguration = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConfiguration");
    action->AddOutputParameter(new ParameterRelated("Configuration", *iPropertyConfiguration));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetConfiguration);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetNetworkInfo(CallbackWifi1GetNetworkInfo aCallback, void* aPtr)
{
    iCallbackGetNetworkInfo = aCallback;
    iPtrGetNetworkInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetworkInfo");
    action->AddOutputParameter(new ParameterString("NetworkInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetNetworkInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetScanResults(CallbackWifi1GetScanResults aCallback, void* aPtr)
{
    iCallbackGetScanResults = aCallback;
    iPtrGetScanResults = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanResults");
    action->AddOutputParameter(new ParameterRelated("ScanResults", *iPropertyScanResults));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetScanResults);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetSignalInfo(CallbackWifi1GetSignalInfo aCallback, void* aPtr)
{
    iCallbackGetSignalInfo = aCallback;
    iPtrGetSignalInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSignalInfo");
    action->AddOutputParameter(new ParameterString("SignalInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetSignalInfo);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionGetStatus(CallbackWifi1GetStatus aCallback, void* aPtr)
{
    iCallbackGetStatus = aCallback;
    iPtrGetStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoGetStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionScan(CallbackWifi1Scan aCallback, void* aPtr)
{
    iCallbackScan = aCallback;
    iPtrScan = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Scan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoScan);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::EnableActionSetCredentials(CallbackWifi1SetCredentials aCallback, void* aPtr)
{
    iCallbackSetCredentials = aCallback;
    iPtrSetCredentials = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetCredentials");
    action->AddInputParameter(new ParameterString("Ssid"));
    action->AddInputParameter(new ParameterString("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkWifi1C::DoSetCredentials);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkWifi1C::DoClearCredentials(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearCredentials != NULL);
    if (0 != iCallbackClearCredentials(iPtrClearCredentials, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetAdapterInUse(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t AdapterInUse;
    ASSERT(iCallbackGetAdapterInUse != NULL);
    if (0 != iCallbackGetAdapterInUse(iPtrGetAdapterInUse, invocationC, invocationCPtr, &AdapterInUse)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respAdapterInUse(aInvocation, "AdapterInUse");
    invocation.StartResponse();
    respAdapterInUse.Write((AdapterInUse!=0));
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetConfiguration(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Configuration;
    ASSERT(iCallbackGetConfiguration != NULL);
    if (0 != iCallbackGetConfiguration(iPtrGetConfiguration, invocationC, invocationCPtr, &Configuration)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respConfiguration(aInvocation, "Configuration");
    invocation.StartResponse();
    Brhz bufConfiguration((const TChar*)Configuration);
    OhNetFreeExternal(Configuration);
    respConfiguration.Write(bufConfiguration);
    respConfiguration.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetNetworkInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NetworkInfo;
    ASSERT(iCallbackGetNetworkInfo != NULL);
    if (0 != iCallbackGetNetworkInfo(iPtrGetNetworkInfo, invocationC, invocationCPtr, &NetworkInfo)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNetworkInfo(aInvocation, "NetworkInfo");
    invocation.StartResponse();
    Brhz bufNetworkInfo((const TChar*)NetworkInfo);
    OhNetFreeExternal(NetworkInfo);
    respNetworkInfo.Write(bufNetworkInfo);
    respNetworkInfo.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetScanResults(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ScanResults;
    ASSERT(iCallbackGetScanResults != NULL);
    if (0 != iCallbackGetScanResults(iPtrGetScanResults, invocationC, invocationCPtr, &ScanResults)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respScanResults(aInvocation, "ScanResults");
    invocation.StartResponse();
    Brhz bufScanResults((const TChar*)ScanResults);
    OhNetFreeExternal(ScanResults);
    respScanResults.Write(bufScanResults);
    respScanResults.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetSignalInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SignalInfo;
    ASSERT(iCallbackGetSignalInfo != NULL);
    if (0 != iCallbackGetSignalInfo(iPtrGetSignalInfo, invocationC, invocationCPtr, &SignalInfo)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSignalInfo(aInvocation, "SignalInfo");
    invocation.StartResponse();
    Brhz bufSignalInfo((const TChar*)SignalInfo);
    OhNetFreeExternal(SignalInfo);
    respSignalInfo.Write(bufSignalInfo);
    respSignalInfo.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoGetStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Status;
    ASSERT(iCallbackGetStatus != NULL);
    if (0 != iCallbackGetStatus(iPtrGetStatus, invocationC, invocationCPtr, &Status)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respStatus(aInvocation, "Status");
    invocation.StartResponse();
    Brhz bufStatus((const TChar*)Status);
    OhNetFreeExternal(Status);
    respStatus.Write(bufStatus);
    respStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoScan(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackScan != NULL);
    if (0 != iCallbackScan(iPtrScan, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkWifi1C::DoSetCredentials(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Ssid;
    aInvocation.InvocationReadString("Ssid", Ssid);
    Brhz Password;
    aInvocation.InvocationReadString("Password", Password);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetCredentials != NULL);
    if (0 != iCallbackSetCredentials(iPtrSetCredentials, invocationC, invocationCPtr, (const char*)Ssid.Ptr(), (const char*)Password.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkWifi1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkWifi1C(aDevice);
}

void STDCALL DvProviderLinnCoUkWifi1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionClearCredentials(THandle aProvider, CallbackWifi1ClearCredentials aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionClearCredentials(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetAdapterInUse(THandle aProvider, CallbackWifi1GetAdapterInUse aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetAdapterInUse(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetConfiguration(THandle aProvider, CallbackWifi1GetConfiguration aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetConfiguration(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetNetworkInfo(THandle aProvider, CallbackWifi1GetNetworkInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetNetworkInfo(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetScanResults(THandle aProvider, CallbackWifi1GetScanResults aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetScanResults(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetSignalInfo(THandle aProvider, CallbackWifi1GetSignalInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetSignalInfo(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionGetStatus(THandle aProvider, CallbackWifi1GetStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionGetStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionScan(THandle aProvider, CallbackWifi1Scan aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionScan(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkWifi1EnableActionSetCredentials(THandle aProvider, CallbackWifi1SetCredentials aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnableActionSetCredentials(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyAdapterInUse(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->SetPropertyAdapterInUse((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkWifi1GetPropertyAdapterInUse(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->GetPropertyAdapterInUse(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyConfiguration(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->SetPropertyConfiguration(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkWifi1GetPropertyConfiguration(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->GetPropertyConfiguration(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyScanResults(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->SetPropertyScanResults(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkWifi1GetPropertyScanResults(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->GetPropertyScanResults(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->SetPropertyStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkWifi1GetPropertyStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->GetPropertyStatus(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkWifi1EnablePropertyAdapterInUse(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnablePropertyAdapterInUse();
}

void STDCALL DvProviderLinnCoUkWifi1EnablePropertyConfiguration(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnablePropertyConfiguration();
}

void STDCALL DvProviderLinnCoUkWifi1EnablePropertyScanResults(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnablePropertyScanResults();
}

void STDCALL DvProviderLinnCoUkWifi1EnablePropertyStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkWifi1C*>(aProvider)->EnablePropertyStatus();
}

