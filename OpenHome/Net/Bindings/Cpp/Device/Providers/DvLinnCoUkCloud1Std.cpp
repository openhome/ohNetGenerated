#include "DvLinnCoUkCloud1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkCloud1Cpp::SetPropertyAssociationStatus(const std::string& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAssociationStatus, buf);
}

void DvProviderLinnCoUkCloud1Cpp::GetPropertyAssociationStatus(std::string& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    const Brx& val = iPropertyAssociationStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkCloud1Cpp::SetPropertyConnected(bool aValue)
{
    ASSERT(iPropertyConnected != NULL);
    return SetPropertyBool(*iPropertyConnected, aValue);
}

void DvProviderLinnCoUkCloud1Cpp::GetPropertyConnected(bool& aValue)
{
    ASSERT(iPropertyConnected != NULL);
    aValue = iPropertyConnected->Value();
}

bool DvProviderLinnCoUkCloud1Cpp::SetPropertyPublicKey(const std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPublicKey, buf);
}

void DvProviderLinnCoUkCloud1Cpp::GetPropertyPublicKey(std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    const Brx& val = iPropertyPublicKey->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkCloud1Cpp::DvProviderLinnCoUkCloud1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Cloud", 1)
{
    iPropertyAssociationStatus = NULL;
    iPropertyConnected = NULL;
    iPropertyPublicKey = NULL;
}

void DvProviderLinnCoUkCloud1Cpp::EnablePropertyAssociationStatus()
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

void DvProviderLinnCoUkCloud1Cpp::EnablePropertyConnected()
{
    iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
    iService->AddProperty(iPropertyConnected); // passes ownership
}

void DvProviderLinnCoUkCloud1Cpp::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetChallengeResponse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionSetAssociated()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociated");
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("Associated"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoSetAssociated);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetConnected()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConnected");
    action->AddOutputParameter(new ParameterRelated("Connected", *iPropertyConnected));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetConnected);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::DoGetChallengeResponse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Challenge;
    aInvocation.InvocationReadString("Challenge", buf_Challenge);
    std::string Challenge((const char*)buf_Challenge.Ptr(), buf_Challenge.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respResponse;
    DvInvocationStd invocation(aInvocation);
    GetChallengeResponse(invocation, Challenge, respResponse);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterResponse(aInvocation, "Response");
    Brn buf_Response((const TByte*)respResponse.c_str(), (TUint)respResponse.length());
    respWriterResponse.Write(buf_Response);
    aInvocation.InvocationWriteStringEnd("Response");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoSetAssociated(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brh buf_AesKeyRsaEncrypted;
    aInvocation.InvocationReadBinary("AesKeyRsaEncrypted", buf_AesKeyRsaEncrypted);
    std::string AesKeyRsaEncrypted((const char*)buf_AesKeyRsaEncrypted.Ptr(), buf_AesKeyRsaEncrypted.Bytes());
    Brh buf_InitVectorRsaEncrypted;
    aInvocation.InvocationReadBinary("InitVectorRsaEncrypted", buf_InitVectorRsaEncrypted);
    std::string InitVectorRsaEncrypted((const char*)buf_InitVectorRsaEncrypted.Ptr(), buf_InitVectorRsaEncrypted.Bytes());
    Brh buf_TokenAesEncrypted;
    aInvocation.InvocationReadBinary("TokenAesEncrypted", buf_TokenAesEncrypted);
    std::string TokenAesEncrypted((const char*)buf_TokenAesEncrypted.Ptr(), buf_TokenAesEncrypted.Bytes());
    bool Associated = aInvocation.InvocationReadBool("Associated");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetAssociated(invocation, AesKeyRsaEncrypted, InitVectorRsaEncrypted, TokenAesEncrypted, Associated);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoGetConnected(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respConnected;
    DvInvocationStd invocation(aInvocation);
    GetConnected(invocation, respConnected);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterConnected(aInvocation, "Connected");
    respWriterConnected.Write(respConnected);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respPublicKey;
    DvInvocationStd invocation(aInvocation);
    GetPublicKey(invocation, respPublicKey);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterPublicKey(aInvocation, "PublicKey");
    Brn buf_PublicKey((const TByte*)respPublicKey.c_str(), (TUint)respPublicKey.length());
    respWriterPublicKey.Write(buf_PublicKey);
    aInvocation.InvocationWriteStringEnd("PublicKey");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::GetChallengeResponse(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChallenge*/, std::string& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::SetAssociated(IDvInvocationStd& /*aInvocation*/, const std::string& /*aAesKeyRsaEncrypted*/, const std::string& /*aInitVectorRsaEncrypted*/, const std::string& /*aTokenAesEncrypted*/, bool /*aAssociated*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::GetConnected(IDvInvocationStd& /*aInvocation*/, bool& /*aConnected*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::GetPublicKey(IDvInvocationStd& /*aInvocation*/, std::string& /*aPublicKey*/)
{
    ASSERTS();
}

