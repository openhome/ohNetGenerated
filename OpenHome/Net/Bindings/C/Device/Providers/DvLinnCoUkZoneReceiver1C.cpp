#include "DvLinnCoUkZoneReceiver1.h"
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

class DvProviderLinnCoUkZoneReceiver1C : public DvProvider
{
public:
    DvProviderLinnCoUkZoneReceiver1C(DvDeviceC aDevice);
    TBool SetPropertySender(const Brx& aValue);
    void GetPropertySender(Brhz& aValue);
    void EnablePropertySender();
    void EnableActionGetSender(CallbackZoneReceiver1GetSender aCallback, void* aPtr);
private:
    void DoGetSender(IDviInvocation& aInvocation);
private:
    CallbackZoneReceiver1GetSender iCallbackGetSender;
    void* iPtrGetSender;
    PropertyString* iPropertySender;
};

DvProviderLinnCoUkZoneReceiver1C::DvProviderLinnCoUkZoneReceiver1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "ZoneReceiver", 1)
{
    iPropertySender = NULL;
}

TBool DvProviderLinnCoUkZoneReceiver1C::SetPropertySender(const Brx& aValue)
{
    ASSERT(iPropertySender != NULL);
    return SetPropertyString(*iPropertySender, aValue);
}

void DvProviderLinnCoUkZoneReceiver1C::GetPropertySender(Brhz& aValue)
{
    ASSERT(iPropertySender != NULL);
    aValue.Set(iPropertySender->Value());
}

void DvProviderLinnCoUkZoneReceiver1C::EnablePropertySender()
{
    iPropertySender = new PropertyString(new ParameterString("Sender"));
    iService->AddProperty(iPropertySender); // passes ownership
}

void DvProviderLinnCoUkZoneReceiver1C::EnableActionGetSender(CallbackZoneReceiver1GetSender aCallback, void* aPtr)
{
    iCallbackGetSender = aCallback;
    iPtrGetSender = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSender");
    action->AddOutputParameter(new ParameterRelated("Sender", *iPropertySender));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZoneReceiver1C::DoGetSender);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZoneReceiver1C::DoGetSender(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Sender;
    ASSERT(iCallbackGetSender != NULL);
    if (0 != iCallbackGetSender(iPtrGetSender, invocationC, invocationCPtr, &Sender)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSender(aInvocation, "Sender");
    invocation.StartResponse();
    Brhz bufSender((const TChar*)Sender);
    OhNetFreeExternal(Sender);
    respSender.Write(bufSender);
    respSender.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkZoneReceiver1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkZoneReceiver1C(aDevice);
}

void STDCALL DvProviderLinnCoUkZoneReceiver1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkZoneReceiver1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkZoneReceiver1EnableActionGetSender(THandle aProvider, CallbackZoneReceiver1GetSender aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkZoneReceiver1C*>(aProvider)->EnableActionGetSender(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkZoneReceiver1SetPropertySender(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkZoneReceiver1C*>(aProvider)->SetPropertySender(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkZoneReceiver1GetPropertySender(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkZoneReceiver1C*>(aProvider)->GetPropertySender(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkZoneReceiver1EnablePropertySender(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkZoneReceiver1C*>(aProvider)->EnablePropertySender();
}

