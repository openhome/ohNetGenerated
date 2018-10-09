#include "DvLinnCoUkCloud1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkCloud1::SetPropertyAssociationStatus(const Brx& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    return SetPropertyString(*iPropertyAssociationStatus, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyAssociationStatus(Brhz& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    aValue.Set(iPropertyAssociationStatus->Value());
}

TBool DvProviderLinnCoUkCloud1::SetPropertyConnected(TBool aValue)
{
    ASSERT(iPropertyConnected != NULL);
    return SetPropertyBool(*iPropertyConnected, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyConnected(TBool& aValue)
{
    ASSERT(iPropertyConnected != NULL);
    aValue = iPropertyConnected->Value();
}

TBool DvProviderLinnCoUkCloud1::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

DvProviderLinnCoUkCloud1::DvProviderLinnCoUkCloud1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Cloud", 1)
{
    Construct();
}

DvProviderLinnCoUkCloud1::DvProviderLinnCoUkCloud1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Cloud", 1)
{
    Construct();
}

void DvProviderLinnCoUkCloud1::Construct()
{
    iPropertyAssociationStatus = NULL;
    iPropertyConnected = NULL;
    iPropertyPublicKey = NULL;
}

void DvProviderLinnCoUkCloud1::EnablePropertyAssociationStatus()
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

void DvProviderLinnCoUkCloud1::EnablePropertyConnected()
{
    iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
    iService->AddProperty(iPropertyConnected); // passes ownership
}

void DvProviderLinnCoUkCloud1::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderLinnCoUkCloud1::EnableActionGetChallengeResponse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionSetAssociated()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociated");
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("Associated"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoSetAssociated);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionGetConnected()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetConnected");
    action->AddOutputParameter(new ParameterRelated("Connected", *iPropertyConnected));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetConnected);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::DoGetChallengeResponse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Challenge;
    aInvocation.InvocationReadString("Challenge", Challenge);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respResponse(aInvocation, "Response");
    GetChallengeResponse(invocation, Challenge, respResponse);
}

void DvProviderLinnCoUkCloud1::DoSetAssociated(IDviInvocation& aInvocation)
{
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
    SetAssociated(invocation, AesKeyRsaEncrypted, InitVectorRsaEncrypted, TokenAesEncrypted, Associated);
}

void DvProviderLinnCoUkCloud1::DoGetConnected(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respConnected(aInvocation, "Connected");
    GetConnected(invocation, respConnected);
}

void DvProviderLinnCoUkCloud1::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    GetPublicKey(invocation, respPublicKey);
}

void DvProviderLinnCoUkCloud1::GetChallengeResponse(IDvInvocation& /*aResponse*/, const Brx& /*aChallenge*/, IDvInvocationResponseString& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::SetAssociated(IDvInvocation& /*aResponse*/, const Brx& /*aAesKeyRsaEncrypted*/, const Brx& /*aInitVectorRsaEncrypted*/, const Brx& /*aTokenAesEncrypted*/, TBool /*aAssociated*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::GetConnected(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aConnected*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::GetPublicKey(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aPublicKey*/)
{
    ASSERTS();
}

