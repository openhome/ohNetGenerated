#include "DvLinnCoUkCloud2.h"
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

class DvProviderLinnCoUkCloud2C : public DvProvider
{
public:
    DvProviderLinnCoUkCloud2C(DvDeviceC aDevice);
    TBool SetPropertyAssociationStatus(const Brx& aValue);
    void GetPropertyAssociationStatus(Brhz& aValue);
    TBool SetPropertyConnected(TBool aValue);
    void GetPropertyConnected(TBool& aValue);
    TBool SetPropertyAccountId(const Brx& aValue);
    void GetPropertyAccountId(Brhz& aValue);
    TBool SetPropertyPublicKey(const Brx& aValue);
    void GetPropertyPublicKey(Brhz& aValue);
    void EnablePropertyAssociationStatus();
    void EnablePropertyConnected();
    void EnablePropertyAccountId();
    void EnablePropertyPublicKey();
    void EnableActionGetChallengeResponse(CallbackCloud2GetChallengeResponse aCallback, void* aPtr);
    void EnableActionSetAssociated(CallbackCloud2SetAssociated aCallback, void* aPtr);
    void EnableActionGetConnected(CallbackCloud2GetConnected aCallback, void* aPtr);
    void EnableActionGetAccountId(CallbackCloud2GetAccountId aCallback, void* aPtr);
    void EnableActionGetPublicKey(CallbackCloud2GetPublicKey aCallback, void* aPtr);
private:
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociated(IDviInvocation& aInvocation);
    void DoGetConnected(IDviInvocation& aInvocation);
    void DoGetAccountId(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
private:
    CallbackCloud2GetChallengeResponse iCallbackGetChallengeResponse;
    void* iPtrGetChallengeResponse;
    CallbackCloud2SetAssociated iCallbackSetAssociated;
    void* iPtrSetAssociated;
    CallbackCloud2GetConnected iCallbackGetConnected;
    void* iPtrGetConnected;
    CallbackCloud2GetAccountId iCallbackGetAccountId;
    void* iPtrGetAccountId;
    CallbackCloud2GetPublicKey iCallbackGetPublicKey;
    void* iPtrGetPublicKey;
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyConnected;
    PropertyString* iPropertyAccountId;
    PropertyString* iPropertyPublicKey;
};

DvProviderLinnCoUkCloud2C::DvProviderLinnCoUkCloud2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Cloud", 2)
{
    iPropertyAssociationStatus = NULL;
    iPropertyConnected = NULL;
    iPropertyAccountId = NULL;
    iPropertyPublicKey = NULL;
}

TBool DvProviderLinnCoUkCloud2C::SetPropertyAssociationStatus(const Brx& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    return SetPropertyString(*iPropertyAssociationStatus, aValue);
}

void DvProviderLinnCoUkCloud2C::GetPropertyAssociationStatus(Brhz& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    aValue.Set(iPropertyAssociationStatus->Value());
}

TBool DvProviderLinnCoUkCloud2C::SetPropertyConnected(TBool aValue)
{
    ASSERT(iPropertyConnected != NULL);
    return SetPropertyBool(*iPropertyConnected, aValue);
}

void DvProviderLinnCoUkCloud2C::GetPropertyConnected(TBool& aValue)
{
    ASSERT(iPropertyConnected != NULL);
    aValue = iPropertyConnected->Value();
}

TBool DvProviderLinnCoUkCloud2C::SetPropertyAccountId(const Brx& aValue)
{
    ASSERT(iPropertyAccountId != NULL);
    return SetPropertyString(*iPropertyAccountId, aValue);
}

void DvProviderLinnCoUkCloud2C::GetPropertyAccountId(Brhz& aValue)
{
    ASSERT(iPropertyAccountId != NULL);
    aValue.Set(iPropertyAccountId->Value());
}

TBool DvProviderLinnCoUkCloud2C::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderLinnCoUkCloud2C::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

void DvProviderLinnCoUkCloud2C::EnablePropertyAssociationStatus()
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

void DvProviderLinnCoUkCloud2C::EnablePropertyConnected()
{
    iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
    iService->AddProperty(iPropertyConnected); // passes ownership
}

void DvProviderLinnCoUkCloud2C::EnablePropertyAccountId()
{
    iPropertyAccountId = new PropertyString(new ParameterString("AccountId"));
    iService->AddProperty(iPropertyAccountId); // passes ownership
}

void DvProviderLinnCoUkCloud2C::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderLinnCoUkCloud2C::EnableActionGetChallengeResponse(CallbackCloud2GetChallengeResponse aCallback, void* aPtr)
{
    iCallbackGetChallengeResponse = aCallback;
    iPtrGetChallengeResponse = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud2C::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud2C::EnableActionSetAssociated(CallbackCloud2SetAssociated aCallback, void* aPtr)
{
    iCallbackSetAssociated = aCallback;
    iPtrSetAssociated = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociated");
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("Associated"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud2C::DoSetAssociated);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud2C::EnableActionGetConnected(CallbackCloud2GetConnected aCallback, void* aPtr)
{
    iCallbackGetConnected = aCallback;
    iPtrGetConnected = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConnected");
    action->AddOutputParameter(new ParameterRelated("Connected", *iPropertyConnected));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud2C::DoGetConnected);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud2C::EnableActionGetAccountId(CallbackCloud2GetAccountId aCallback, void* aPtr)
{
    iCallbackGetAccountId = aCallback;
    iPtrGetAccountId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAccountId");
    action->AddOutputParameter(new ParameterRelated("AccountId", *iPropertyAccountId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud2C::DoGetAccountId);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud2C::EnableActionGetPublicKey(CallbackCloud2GetPublicKey aCallback, void* aPtr)
{
    iCallbackGetPublicKey = aCallback;
    iPtrGetPublicKey = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud2C::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud2C::DoGetChallengeResponse(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkCloud2C::DoSetAssociated(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkCloud2C::DoGetConnected(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkCloud2C::DoGetAccountId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* AccountId;
    ASSERT(iCallbackGetAccountId != NULL);
    if (0 != iCallbackGetAccountId(iPtrGetAccountId, invocationC, invocationCPtr, &AccountId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respAccountId(aInvocation, "AccountId");
    invocation.StartResponse();
    Brhz bufAccountId((const TChar*)AccountId);
    OhNetFreeExternal(AccountId);
    respAccountId.Write(bufAccountId);
    respAccountId.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkCloud2C::DoGetPublicKey(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkCloud2Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkCloud2C(aDevice);
}

void STDCALL DvProviderLinnCoUkCloud2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkCloud2EnableActionGetChallengeResponse(THandle aProvider, CallbackCloud2GetChallengeResponse aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnableActionGetChallengeResponse(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud2EnableActionSetAssociated(THandle aProvider, CallbackCloud2SetAssociated aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnableActionSetAssociated(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud2EnableActionGetConnected(THandle aProvider, CallbackCloud2GetConnected aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnableActionGetConnected(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud2EnableActionGetAccountId(THandle aProvider, CallbackCloud2GetAccountId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnableActionGetAccountId(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkCloud2EnableActionGetPublicKey(THandle aProvider, CallbackCloud2GetPublicKey aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnableActionGetPublicKey(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkCloud2SetPropertyAssociationStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->SetPropertyAssociationStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud2GetPropertyAssociationStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->GetPropertyAssociationStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkCloud2SetPropertyConnected(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->SetPropertyConnected((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud2GetPropertyConnected(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->GetPropertyConnected(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkCloud2SetPropertyAccountId(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->SetPropertyAccountId(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud2GetPropertyAccountId(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->GetPropertyAccountId(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkCloud2SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->SetPropertyPublicKey(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkCloud2GetPropertyPublicKey(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->GetPropertyPublicKey(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkCloud2EnablePropertyAssociationStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnablePropertyAssociationStatus();
}

void STDCALL DvProviderLinnCoUkCloud2EnablePropertyConnected(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnablePropertyConnected();
}

void STDCALL DvProviderLinnCoUkCloud2EnablePropertyAccountId(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnablePropertyAccountId();
}

void STDCALL DvProviderLinnCoUkCloud2EnablePropertyPublicKey(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkCloud2C*>(aProvider)->EnablePropertyPublicKey();
}

