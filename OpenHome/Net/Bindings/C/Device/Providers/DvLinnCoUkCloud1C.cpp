#include "DvLinnCoUkCloud1.h"
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

class DvProviderLinnCoUkCloud1C : public DvProvider
{
public:
    DvProviderLinnCoUkCloud1C(DvDeviceC aDevice);
    TBool SetPropertyAssociationStatus(const Brx& aValue);
    void GetPropertyAssociationStatus(Brhz& aValue);
    TBool SetPropertyControlEnabled(TBool aValue);
    void GetPropertyControlEnabled(TBool& aValue);
    void EnablePropertyAssociationStatus();
    void EnablePropertyControlEnabled();
    void EnableActionGetChallengeResponse(CallbackCloud1GetChallengeResponse aCallback, void* aPtr);
    void EnableActionSetAssociationStatus(CallbackCloud1SetAssociationStatus aCallback, void* aPtr);
    void EnableActionGetAssociationStatus(CallbackCloud1GetAssociationStatus aCallback, void* aPtr);
    void EnableActionSetControlEnabled(CallbackCloud1SetControlEnabled aCallback, void* aPtr);
    void EnableActionGetControlEnabled(CallbackCloud1GetControlEnabled aCallback, void* aPtr);
private:
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociationStatus(IDviInvocation& aInvocation);
    void DoGetAssociationStatus(IDviInvocation& aInvocation);
    void DoSetControlEnabled(IDviInvocation& aInvocation);
    void DoGetControlEnabled(IDviInvocation& aInvocation);
private:
    CallbackCloud1GetChallengeResponse iCallbackGetChallengeResponse;
    void* iPtrGetChallengeResponse;
    CallbackCloud1SetAssociationStatus iCallbackSetAssociationStatus;
    void* iPtrSetAssociationStatus;
    CallbackCloud1GetAssociationStatus iCallbackGetAssociationStatus;
    void* iPtrGetAssociationStatus;
    CallbackCloud1SetControlEnabled iCallbackSetControlEnabled;
    void* iPtrSetControlEnabled;
    CallbackCloud1GetControlEnabled iCallbackGetControlEnabled;
    void* iPtrGetControlEnabled;
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyControlEnabled;
};

DvProviderLinnCoUkCloud1C::DvProviderLinnCoUkCloud1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Cloud", 1)
{
    iPropertyAssociationStatus = NULL;
    iPropertyControlEnabled = NULL;
}

TBool DvProviderLinnCoUkCloud1C::SetPropertyAssociationStatus(const Brx& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    return SetPropertyString(*iPropertyAssociationStatus, aValue);
}

void DvProviderLinnCoUkCloud1C::GetPropertyAssociationStatus(Brhz& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    aValue.Set(iPropertyAssociationStatus->Value());
}

TBool DvProviderLinnCoUkCloud1C::SetPropertyControlEnabled(TBool aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    return SetPropertyBool(*iPropertyControlEnabled, aValue);
}

void DvProviderLinnCoUkCloud1C::GetPropertyControlEnabled(TBool& aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    aValue = iPropertyControlEnabled->Value();
}

void DvProviderLinnCoUkCloud1C::EnablePropertyAssociationStatus()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Associated";
    allowedValues[index++] = (TChar*)"NotAssociated";
    allowedValues[index++] = (TChar*)"Unconfigured";
    iPropertyAssociationStatus = new PropertyString(new ParameterString("AssociationStatus", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyAssociationStatus); // passes ownership
}

void DvProviderLinnCoUkCloud1C::EnablePropertyControlEnabled()
{
    iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
    iService->AddProperty(iPropertyControlEnabled); // passes ownership
}

void DvProviderLinnCoUkCloud1C::EnableActionGetChallengeResponse(CallbackCloud1GetChallengeResponse aCallback, void* aPtr)
{
    iCallbackGetChallengeResponse = aCallback;
    iPtrGetChallengeResponse = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionSetAssociationStatus(CallbackCloud1SetAssociationStatus aCallback, void* aPtr)
{
    iCallbackSetAssociationStatus = aCallback;
    iPtrSetAssociationStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociationStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoSetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionGetAssociationStatus(CallbackCloud1GetAssociationStatus aCallback, void* aPtr)
{
    iCallbackGetAssociationStatus = aCallback;
    iPtrGetAssociationStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociationStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoGetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionSetControlEnabled(CallbackCloud1SetControlEnabled aCallback, void* aPtr)
{
    iCallbackSetControlEnabled = aCallback;
    iPtrSetControlEnabled = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetControlEnabled");
    action->AddInputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoSetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionGetControlEnabled(CallbackCloud1GetControlEnabled aCallback, void* aPtr)
{
    iCallbackGetControlEnabled = aCallback;
    iPtrGetControlEnabled = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetControlEnabled");
    action->AddOutputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoGetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::DoGetChallengeResponse(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Challenge;
    aInvocation.InvocationReadString("Challenge", Challenge);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Response;
    ASSERT(iCallbackGetChallengeResponse != NULL);
    if (0 != iCallbackGetChallengeResponse(iPtrGetChallengeResponse, invocationC, invocationCPtr, (const char*)Challenge.Ptr(), &Response)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respResponse(aInvocation, "Response");
    invocation.StartResponse();
    Brhz bufResponse((const TChar*)Response);
    OhNetFreeExternal(Response);
    respResponse.Write(bufResponse);
    respResponse.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud1C::DoSetAssociationStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Status;
    aInvocation.InvocationReadString("Status", Status);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetAssociationStatus != NULL);
    if (0 != iCallbackSetAssociationStatus(iPtrSetAssociationStatus, invocationC, invocationCPtr, (const char*)Status.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud1C::DoGetAssociationStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Status;
    ASSERT(iCallbackGetAssociationStatus != NULL);
    if (0 != iCallbackGetAssociationStatus(iPtrGetAssociationStatus, invocationC, invocationCPtr, &Status)) {
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

void DvProviderLinnCoUkCloud1C::DoSetControlEnabled(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetControlEnabled != NULL);
    if (0 != iCallbackSetControlEnabled(iPtrSetControlEnabled, invocationC, invocationCPtr, Enabled)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud1C::DoGetControlEnabled(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Enabled;
    ASSERT(iCallbackGetControlEnabled != NULL);
    if (0 != iCallbackGetControlEnabled(iPtrGetControlEnabled, invocationC, invocationCPtr, &Enabled)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respEnabled(aInvocation, "Enabled");
    invocation.StartResponse();
    respEnabled.Write((Enabled!=0));
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkCloud1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkCloud1C(aDevice);
}

void STDCALL DvProviderLinnCoUkCloud1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionGetChallengeResponse(THandle aProvider, CallbackCloud1GetChallengeResponse aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionGetChallengeResponse(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionSetAssociationStatus(THandle aProvider, CallbackCloud1SetAssociationStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionSetAssociationStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionGetAssociationStatus(THandle aProvider, CallbackCloud1GetAssociationStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionGetAssociationStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionSetControlEnabled(THandle aProvider, CallbackCloud1SetControlEnabled aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionSetControlEnabled(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionGetControlEnabled(THandle aProvider, CallbackCloud1GetControlEnabled aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionGetControlEnabled(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyAssociationStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->SetPropertyAssociationStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud1GetPropertyAssociationStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->GetPropertyAssociationStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyControlEnabled(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->SetPropertyControlEnabled((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud1GetPropertyControlEnabled(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->GetPropertyControlEnabled(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderLinnCoUkCloud1EnablePropertyAssociationStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnablePropertyAssociationStatus();
}

void STDCALL DvProviderLinnCoUkCloud1EnablePropertyControlEnabled(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnablePropertyControlEnabled();
}

