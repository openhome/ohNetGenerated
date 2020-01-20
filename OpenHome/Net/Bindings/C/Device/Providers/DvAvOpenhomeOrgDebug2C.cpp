#include "DvAvOpenhomeOrgDebug2.h"
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

class DvProviderAvOpenhomeOrgDebug2C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgDebug2C(DvDeviceC aDevice);
    void EnableActionGetLog(CallbackDebug2GetLog aCallback, void* aPtr);
    void EnableActionSendLog(CallbackDebug2SendLog aCallback, void* aPtr);
    void EnableActionSendDeviceAnnouncements(CallbackDebug2SendDeviceAnnouncements aCallback, void* aPtr);
    void EnableActionGetRecentMSearches(CallbackDebug2GetRecentMSearches aCallback, void* aPtr);
private:
    void DoGetLog(IDviInvocation& aInvocation);
    void DoSendLog(IDviInvocation& aInvocation);
    void DoSendDeviceAnnouncements(IDviInvocation& aInvocation);
    void DoGetRecentMSearches(IDviInvocation& aInvocation);
private:
    CallbackDebug2GetLog iCallbackGetLog;
    void* iPtrGetLog;
    CallbackDebug2SendLog iCallbackSendLog;
    void* iPtrSendLog;
    CallbackDebug2SendDeviceAnnouncements iCallbackSendDeviceAnnouncements;
    void* iPtrSendDeviceAnnouncements;
    CallbackDebug2GetRecentMSearches iCallbackGetRecentMSearches;
    void* iPtrGetRecentMSearches;
};

DvProviderAvOpenhomeOrgDebug2C::DvProviderAvOpenhomeOrgDebug2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Debug", 2)
{
}

void DvProviderAvOpenhomeOrgDebug2C::EnableActionGetLog(CallbackDebug2GetLog aCallback, void* aPtr)
{
    iCallbackGetLog = aCallback;
    iPtrGetLog = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2C::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2C::EnableActionSendLog(CallbackDebug2SendLog aCallback, void* aPtr)
{
    iCallbackSendLog = aCallback;
    iPtrSendLog = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendLog");
    action->AddInputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2C::DoSendLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2C::EnableActionSendDeviceAnnouncements(CallbackDebug2SendDeviceAnnouncements aCallback, void* aPtr)
{
    iCallbackSendDeviceAnnouncements = aCallback;
    iPtrSendDeviceAnnouncements = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendDeviceAnnouncements");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2C::DoSendDeviceAnnouncements);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2C::EnableActionGetRecentMSearches(CallbackDebug2GetRecentMSearches aCallback, void* aPtr)
{
    iCallbackGetRecentMSearches = aCallback;
    iPtrGetRecentMSearches = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecentMSearches");
    action->AddOutputParameter(new ParameterString("JsonArray"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2C::DoGetRecentMSearches);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2C::DoGetLog(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Log;
    ASSERT(iCallbackGetLog != NULL);
    if (0 != iCallbackGetLog(iPtrGetLog, invocationC, invocationCPtr, &Log)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respLog(aInvocation, "Log");
    invocation.StartResponse();
    Brhz bufLog((const TChar*)Log);
    OhNetFreeExternal(Log);
    respLog.Write(bufLog);
    respLog.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDebug2C::DoSendLog(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Data;
    aInvocation.InvocationReadString("Data", Data);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSendLog != NULL);
    if (0 != iCallbackSendLog(iPtrSendLog, invocationC, invocationCPtr, (const char*)Data.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDebug2C::DoSendDeviceAnnouncements(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSendDeviceAnnouncements != NULL);
    if (0 != iCallbackSendDeviceAnnouncements(iPtrSendDeviceAnnouncements, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDebug2C::DoGetRecentMSearches(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* JsonArray;
    ASSERT(iCallbackGetRecentMSearches != NULL);
    if (0 != iCallbackGetRecentMSearches(iPtrGetRecentMSearches, invocationC, invocationCPtr, &JsonArray)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respJsonArray(aInvocation, "JsonArray");
    invocation.StartResponse();
    Brhz bufJsonArray((const TChar*)JsonArray);
    OhNetFreeExternal(JsonArray);
    respJsonArray.Write(bufJsonArray);
    respJsonArray.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgDebug2Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgDebug2C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgDebug2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgDebug2C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionGetLog(THandle aProvider, CallbackDebug2GetLog aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDebug2C*>(aProvider)->EnableActionGetLog(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionSendLog(THandle aProvider, CallbackDebug2SendLog aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDebug2C*>(aProvider)->EnableActionSendLog(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionSendDeviceAnnouncements(THandle aProvider, CallbackDebug2SendDeviceAnnouncements aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDebug2C*>(aProvider)->EnableActionSendDeviceAnnouncements(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionGetRecentMSearches(THandle aProvider, CallbackDebug2GetRecentMSearches aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDebug2C*>(aProvider)->EnableActionGetRecentMSearches(aCallback, aPtr);
}

