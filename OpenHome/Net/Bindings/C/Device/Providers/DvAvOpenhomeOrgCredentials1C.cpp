#include "DvAvOpenhomeOrgCredentials1.h"
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

class DvProviderAvOpenhomeOrgCredentials1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgCredentials1C(DvDeviceC aDevice);
    TBool SetPropertyIds(const Brx& aValue);
    void GetPropertyIds(Brhz& aValue);
    TBool SetPropertyPublicKey(const Brx& aValue);
    void GetPropertyPublicKey(Brhz& aValue);
    TBool SetPropertySequenceNumber(TUint aValue);
    void GetPropertySequenceNumber(TUint& aValue);
    void EnablePropertyIds();
    void EnablePropertyPublicKey();
    void EnablePropertySequenceNumber();
    void EnableActionSet(CallbackCredentials1Set aCallback, void* aPtr);
    void EnableActionClear(CallbackCredentials1Clear aCallback, void* aPtr);
    void EnableActionSetEnabled(CallbackCredentials1SetEnabled aCallback, void* aPtr);
    void EnableActionGet(CallbackCredentials1Get aCallback, void* aPtr);
    void EnableActionLogin(CallbackCredentials1Login aCallback, void* aPtr);
    void EnableActionReLogin(CallbackCredentials1ReLogin aCallback, void* aPtr);
    void EnableActionGetIds(CallbackCredentials1GetIds aCallback, void* aPtr);
    void EnableActionGetPublicKey(CallbackCredentials1GetPublicKey aCallback, void* aPtr);
    void EnableActionGetSequenceNumber(CallbackCredentials1GetSequenceNumber aCallback, void* aPtr);
private:
    void DoSet(IDviInvocation& aInvocation);
    void DoClear(IDviInvocation& aInvocation);
    void DoSetEnabled(IDviInvocation& aInvocation);
    void DoGet(IDviInvocation& aInvocation);
    void DoLogin(IDviInvocation& aInvocation);
    void DoReLogin(IDviInvocation& aInvocation);
    void DoGetIds(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
    void DoGetSequenceNumber(IDviInvocation& aInvocation);
private:
    CallbackCredentials1Set iCallbackSet;
    void* iPtrSet;
    CallbackCredentials1Clear iCallbackClear;
    void* iPtrClear;
    CallbackCredentials1SetEnabled iCallbackSetEnabled;
    void* iPtrSetEnabled;
    CallbackCredentials1Get iCallbackGet;
    void* iPtrGet;
    CallbackCredentials1Login iCallbackLogin;
    void* iPtrLogin;
    CallbackCredentials1ReLogin iCallbackReLogin;
    void* iPtrReLogin;
    CallbackCredentials1GetIds iCallbackGetIds;
    void* iPtrGetIds;
    CallbackCredentials1GetPublicKey iCallbackGetPublicKey;
    void* iPtrGetPublicKey;
    CallbackCredentials1GetSequenceNumber iCallbackGetSequenceNumber;
    void* iPtrGetSequenceNumber;
    PropertyString* iPropertyIds;
    PropertyString* iPropertyPublicKey;
    PropertyUint* iPropertySequenceNumber;
};

DvProviderAvOpenhomeOrgCredentials1C::DvProviderAvOpenhomeOrgCredentials1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Credentials", 1)
{
    iPropertyIds = NULL;
    iPropertyPublicKey = NULL;
    iPropertySequenceNumber = NULL;
}

TBool DvProviderAvOpenhomeOrgCredentials1C::SetPropertyIds(const Brx& aValue)
{
    ASSERT(iPropertyIds != NULL);
    return SetPropertyString(*iPropertyIds, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1C::GetPropertyIds(Brhz& aValue)
{
    ASSERT(iPropertyIds != NULL);
    aValue.Set(iPropertyIds->Value());
}

TBool DvProviderAvOpenhomeOrgCredentials1C::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1C::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

TBool DvProviderAvOpenhomeOrgCredentials1C::SetPropertySequenceNumber(TUint aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    return SetPropertyUint(*iPropertySequenceNumber, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1C::GetPropertySequenceNumber(TUint& aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    aValue = iPropertySequenceNumber->Value();
}

void DvProviderAvOpenhomeOrgCredentials1C::EnablePropertyIds()
{
    iPropertyIds = new PropertyString(new ParameterString("Ids"));
    iService->AddProperty(iPropertyIds); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1C::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1C::EnablePropertySequenceNumber()
{
    iPropertySequenceNumber = new PropertyUint(new ParameterUint("SequenceNumber"));
    iService->AddProperty(iPropertySequenceNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionSet(CallbackCredentials1Set aCallback, void* aPtr)
{
    iCallbackSet = aCallback;
    iPtrSet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("UserName"));
    action->AddInputParameter(new ParameterBinary("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionClear(CallbackCredentials1Clear aCallback, void* aPtr)
{
    iCallbackClear = aCallback;
    iPtrClear = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterString("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionSetEnabled(CallbackCredentials1SetEnabled aCallback, void* aPtr)
{
    iCallbackSetEnabled = aCallback;
    iPtrSetEnabled = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnabled");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterBool("Enabled"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoSetEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionGet(CallbackCredentials1Get aCallback, void* aPtr)
{
    iCallbackGet = aCallback;
    iPtrGet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Get");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("UserName"));
    action->AddOutputParameter(new ParameterBinary("Password"));
    action->AddOutputParameter(new ParameterBool("Enabled"));
    action->AddOutputParameter(new ParameterString("Status"));
    action->AddOutputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoGet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionLogin(CallbackCredentials1Login aCallback, void* aPtr)
{
    iCallbackLogin = aCallback;
    iPtrLogin = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Login");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("Token"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionReLogin(CallbackCredentials1ReLogin aCallback, void* aPtr)
{
    iCallbackReLogin = aCallback;
    iPtrReLogin = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReLogin");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("CurrentToken"));
    action->AddOutputParameter(new ParameterString("NewToken"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoReLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionGetIds(CallbackCredentials1GetIds aCallback, void* aPtr)
{
    iCallbackGetIds = aCallback;
    iPtrGetIds = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIds");
    action->AddOutputParameter(new ParameterRelated("Ids", *iPropertyIds));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoGetIds);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionGetPublicKey(CallbackCredentials1GetPublicKey aCallback, void* aPtr)
{
    iCallbackGetPublicKey = aCallback;
    iPtrGetPublicKey = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::EnableActionGetSequenceNumber(CallbackCredentials1GetSequenceNumber aCallback, void* aPtr)
{
    iCallbackGetSequenceNumber = aCallback;
    iPtrGetSequenceNumber = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSequenceNumber");
    action->AddOutputParameter(new ParameterRelated("SequenceNumber", *iPropertySequenceNumber));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1C::DoGetSequenceNumber);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1C::DoSet(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    Brhz UserName;
    aInvocation.InvocationReadString("UserName", UserName);
    Brh Password;
    aInvocation.InvocationReadBinary("Password", Password);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSet != NULL);
    if (0 != iCallbackSet(iPtrSet, invocationC, invocationCPtr, (const char*)Id.Ptr(), (const char*)UserName.Ptr(), (const char*)Password.Ptr(), Password.Bytes())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoClear(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClear != NULL);
    if (0 != iCallbackClear(iPtrClear, invocationC, invocationCPtr, (const char*)Id.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoSetEnabled(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    TBool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetEnabled != NULL);
    if (0 != iCallbackSetEnabled(iPtrSetEnabled, invocationC, invocationCPtr, (const char*)Id.Ptr(), Enabled)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoGet(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* UserName;
    char* Password;
    uint32_t PasswordLen;
    uint32_t Enabled;
    char* Status;
    char* Data;
    ASSERT(iCallbackGet != NULL);
    if (0 != iCallbackGet(iPtrGet, invocationC, invocationCPtr, (const char*)Id.Ptr(), &UserName, &Password, &PasswordLen, &Enabled, &Status, &Data)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respUserName(aInvocation, "UserName");
    DviInvocationResponseBinary respPassword(aInvocation, "Password");
    DviInvocationResponseBool respEnabled(aInvocation, "Enabled");
    DviInvocationResponseString respStatus(aInvocation, "Status");
    DviInvocationResponseString respData(aInvocation, "Data");
    invocation.StartResponse();
    Brhz bufUserName((const TChar*)UserName);
    OhNetFreeExternal(UserName);
    respUserName.Write(bufUserName);
    respUserName.WriteFlush();
    Brh bufPassword;
    bufPassword.Set((const TByte*)Password, PasswordLen);
    OhNetFreeExternal(Password);
    respPassword.Write(bufPassword);
    respPassword.WriteFlush();
    respEnabled.Write((Enabled!=0));
    Brhz bufStatus((const TChar*)Status);
    OhNetFreeExternal(Status);
    respStatus.Write(bufStatus);
    respStatus.WriteFlush();
    Brhz bufData((const TChar*)Data);
    OhNetFreeExternal(Data);
    respData.Write(bufData);
    respData.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoLogin(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Token;
    ASSERT(iCallbackLogin != NULL);
    if (0 != iCallbackLogin(iPtrLogin, invocationC, invocationCPtr, (const char*)Id.Ptr(), &Token)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respToken(aInvocation, "Token");
    invocation.StartResponse();
    Brhz bufToken((const TChar*)Token);
    OhNetFreeExternal(Token);
    respToken.Write(bufToken);
    respToken.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoReLogin(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    Brhz CurrentToken;
    aInvocation.InvocationReadString("CurrentToken", CurrentToken);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NewToken;
    ASSERT(iCallbackReLogin != NULL);
    if (0 != iCallbackReLogin(iPtrReLogin, invocationC, invocationCPtr, (const char*)Id.Ptr(), (const char*)CurrentToken.Ptr(), &NewToken)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNewToken(aInvocation, "NewToken");
    invocation.StartResponse();
    Brhz bufNewToken((const TChar*)NewToken);
    OhNetFreeExternal(NewToken);
    respNewToken.Write(bufNewToken);
    respNewToken.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoGetIds(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Ids;
    ASSERT(iCallbackGetIds != NULL);
    if (0 != iCallbackGetIds(iPtrGetIds, invocationC, invocationCPtr, &Ids)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respIds(aInvocation, "Ids");
    invocation.StartResponse();
    Brhz bufIds((const TChar*)Ids);
    OhNetFreeExternal(Ids);
    respIds.Write(bufIds);
    respIds.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgCredentials1C::DoGetPublicKey(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgCredentials1C::DoGetSequenceNumber(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SequenceNumber;
    ASSERT(iCallbackGetSequenceNumber != NULL);
    if (0 != iCallbackGetSequenceNumber(iPtrGetSequenceNumber, invocationC, invocationCPtr, &SequenceNumber)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respSequenceNumber(aInvocation, "SequenceNumber");
    invocation.StartResponse();
    respSequenceNumber.Write(SequenceNumber);
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgCredentials1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgCredentials1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionSet(THandle aProvider, CallbackCredentials1Set aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionSet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionClear(THandle aProvider, CallbackCredentials1Clear aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionClear(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionSetEnabled(THandle aProvider, CallbackCredentials1SetEnabled aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionSetEnabled(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGet(THandle aProvider, CallbackCredentials1Get aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionGet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionLogin(THandle aProvider, CallbackCredentials1Login aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionLogin(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionReLogin(THandle aProvider, CallbackCredentials1ReLogin aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionReLogin(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetIds(THandle aProvider, CallbackCredentials1GetIds aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionGetIds(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetPublicKey(THandle aProvider, CallbackCredentials1GetPublicKey aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionGetPublicKey(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetSequenceNumber(THandle aProvider, CallbackCredentials1GetSequenceNumber aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnableActionGetSequenceNumber(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertyIds(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->SetPropertyIds(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertyIds(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->GetPropertyIds(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->SetPropertyPublicKey(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertyPublicKey(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->GetPropertyPublicKey(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertySequenceNumber(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->SetPropertySequenceNumber(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertySequenceNumber(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->GetPropertySequenceNumber(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertyIds(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnablePropertyIds();
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertyPublicKey(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnablePropertyPublicKey();
}

void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertySequenceNumber(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgCredentials1C*>(aProvider)->EnablePropertySequenceNumber();
}

