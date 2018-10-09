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
    TBool SetPropertyConnected(TBool aValue);
    void GetPropertyConnected(TBool& aValue);
    TBool SetPropertyPublicKey(const Brx& aValue);
    void GetPropertyPublicKey(Brhz& aValue);
    void EnablePropertyAssociationStatus();
    void EnablePropertyConnected();
    void EnablePropertyPublicKey();
    void EnableActionGetChallengeResponse(CallbackCloud1GetChallengeResponse aCallback, void* aPtr);
    void EnableActionSetAssociated(CallbackCloud1SetAssociated aCallback, void* aPtr);
    void EnableActionGetConnected(CallbackCloud1GetConnected aCallback, void* aPtr);
    void EnableActionGetPublicKey(CallbackCloud1GetPublicKey aCallback, void* aPtr);
private:
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociated(IDviInvocation& aInvocation);
    void DoGetConnected(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
private:
    CallbackCloud1GetChallengeResponse iCallbackGetChallengeResponse;
    void* iPtrGetChallengeResponse;
    CallbackCloud1SetAssociated iCallbackSetAssociated;
    void* iPtrSetAssociated;
    CallbackCloud1GetConnected iCallbackGetConnected;
    void* iPtrGetConnected;
    CallbackCloud1GetPublicKey iCallbackGetPublicKey;
    void* iPtrGetPublicKey;
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyConnected;
    PropertyString* iPropertyPublicKey;
};

DvProviderLinnCoUkCloud1C::DvProviderLinnCoUkCloud1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Cloud", 1)
{
    iPropertyAssociationStatus = NULL;
    iPropertyConnected = NULL;
    iPropertyPublicKey = NULL;
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

TBool DvProviderLinnCoUkCloud1C::SetPropertyConnected(TBool aValue)
{
    ASSERT(iPropertyConnected != NULL);
    return SetPropertyBool(*iPropertyConnected, aValue);
}

void DvProviderLinnCoUkCloud1C::GetPropertyConnected(TBool& aValue)
{
    ASSERT(iPropertyConnected != NULL);
    aValue = iPropertyConnected->Value();
}

TBool DvProviderLinnCoUkCloud1C::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderLinnCoUkCloud1C::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
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

void DvProviderLinnCoUkCloud1C::EnablePropertyConnected()
{
    iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
    iService->AddProperty(iPropertyConnected); // passes ownership
}

void DvProviderLinnCoUkCloud1C::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
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

void DvProviderLinnCoUkCloud1C::EnableActionSetAssociated(CallbackCloud1SetAssociated aCallback, void* aPtr)
{
    iCallbackSetAssociated = aCallback;
    iPtrSetAssociated = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociated");
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("Associated"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoSetAssociated);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionGetConnected(CallbackCloud1GetConnected aCallback, void* aPtr)
{
    iCallbackGetConnected = aCallback;
    iPtrGetConnected = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConnected");
    action->AddOutputParameter(new ParameterRelated("Connected", *iPropertyConnected));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoGetConnected);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1C::EnableActionGetPublicKey(CallbackCloud1GetPublicKey aCallback, void* aPtr)
{
    iCallbackGetPublicKey = aCallback;
    iPtrGetPublicKey = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1C::DoGetPublicKey);
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

void DvProviderLinnCoUkCloud1C::DoSetAssociated(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brh AesKeyRsaEncrypted;
    aInvocation.InvocationReadBinary("AesKeyRsaEncrypted", AesKeyRsaEncrypted);
    Brh InitVectorRsaEncrypted;
    aInvocation.InvocationReadBinary("InitVectorRsaEncrypted", InitVectorRsaEncrypted);
    Brh TokenAesEncrypted;
    aInvocation.InvocationReadBinary("TokenAesEncrypted", TokenAesEncrypted);
    TBool Associated = aInvocation.InvocationReadBool("Associated");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetAssociated != NULL);
    if (0 != iCallbackSetAssociated(iPtrSetAssociated, invocationC, invocationCPtr, (const char*)AesKeyRsaEncrypted.Ptr(), AesKeyRsaEncrypted.Bytes(), (const char*)InitVectorRsaEncrypted.Ptr(), InitVectorRsaEncrypted.Bytes(), (const char*)TokenAesEncrypted.Ptr(), TokenAesEncrypted.Bytes(), Associated)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud1C::DoGetConnected(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Connected;
    ASSERT(iCallbackGetConnected != NULL);
    if (0 != iCallbackGetConnected(iPtrGetConnected, invocationC, invocationCPtr, &Connected)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respConnected(aInvocation, "Connected");
    invocation.StartResponse();
    respConnected.Write((Connected!=0));
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud1C::DoGetPublicKey(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* PublicKey;
    ASSERT(iCallbackGetPublicKey != NULL);
    if (0 != iCallbackGetPublicKey(iPtrGetPublicKey, invocationC, invocationCPtr, &PublicKey)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    invocation.StartResponse();
    Brhz bufPublicKey((const TChar*)PublicKey);
    OhNetFreeExternal(PublicKey);
    respPublicKey.Write(bufPublicKey);
    respPublicKey.WriteFlush();
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

void STDCALL DvProviderLinnCoUkCloud1EnableActionSetAssociated(THandle aProvider, CallbackCloud1SetAssociated aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionSetAssociated(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionGetConnected(THandle aProvider, CallbackCloud1GetConnected aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionGetConnected(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud1EnableActionGetPublicKey(THandle aProvider, CallbackCloud1GetPublicKey aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnableActionGetPublicKey(aCallback, aPtr);
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

int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyConnected(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->SetPropertyConnected((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud1GetPropertyConnected(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->GetPropertyConnected(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->SetPropertyPublicKey(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud1GetPropertyPublicKey(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->GetPropertyPublicKey(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkCloud1EnablePropertyAssociationStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnablePropertyAssociationStatus();
}

void STDCALL DvProviderLinnCoUkCloud1EnablePropertyConnected(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnablePropertyConnected();
}

void STDCALL DvProviderLinnCoUkCloud1EnablePropertyPublicKey(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud1C*>(aProvider)->EnablePropertyPublicKey();
}

