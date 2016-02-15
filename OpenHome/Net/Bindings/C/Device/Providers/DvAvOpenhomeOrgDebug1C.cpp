#include "DvAvOpenhomeOrgDebug1.h"
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

class DvProviderAvOpenhomeOrgDebug1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgDebug1C(DvDeviceC aDevice);
    void EnableActionGetLog(CallbackDebug1GetLog aCallback, void* aPtr);
private:
    void DoGetLog(IDviInvocation& aInvocation);
private:
    CallbackDebug1GetLog iCallbackGetLog;
    void* iPtrGetLog;
};

DvProviderAvOpenhomeOrgDebug1C::DvProviderAvOpenhomeOrgDebug1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Debug", 1)
{
}

void DvProviderAvOpenhomeOrgDebug1C::EnableActionGetLog(CallbackDebug1GetLog aCallback, void* aPtr)
{
    iCallbackGetLog = aCallback;
    iPtrGetLog = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug1C::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug1C::DoGetLog(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgDebug1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgDebug1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgDebug1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgDebug1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgDebug1EnableActionGetLog(THandle aProvider, CallbackDebug1GetLog aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDebug1C*>(aProvider)->EnableActionGetLog(aCallback, aPtr);
}

