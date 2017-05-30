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

TBool DvProviderLinnCoUkCloud1::SetPropertyControlEnabled(TBool aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    return SetPropertyBool(*iPropertyControlEnabled, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyControlEnabled(TBool& aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    aValue = iPropertyControlEnabled->Value();
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
    iPropertyControlEnabled = NULL;
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

void DvProviderLinnCoUkCloud1::EnablePropertyControlEnabled()
{
    iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
    iService->AddProperty(iPropertyControlEnabled); // passes ownership
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

void DvProviderLinnCoUkCloud1::EnableActionSetAssociated()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociated");
    action->AddInputParameter(new ParameterBinary("TokenEncrypted"));
    action->AddInputParameter(new ParameterBool("Associated"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoSetAssociated);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionSetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetControlEnabled");
    action->AddInputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoSetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionGetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetControlEnabled");
    action->AddOutputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetControlEnabled);
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

void DvProviderLinnCoUkCloud1::DoSetAssociated(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brh TokenEncrypted;
    aInvocation.InvocationReadBinary("TokenEncrypted", TokenEncrypted);
    TBool Associated = aInvocation.InvocationReadBool("Associated");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAssociated(invocation, TokenEncrypted, Associated);
}

void DvProviderLinnCoUkCloud1::DoSetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetControlEnabled(invocation, Enabled);
}

void DvProviderLinnCoUkCloud1::DoGetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respEnabled(aInvocation, "Enabled");
    GetControlEnabled(invocation, respEnabled);
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

void DvProviderLinnCoUkCloud1::SetAssociated(IDvInvocation& /*aResponse*/, const Brx& /*aTokenEncrypted*/, TBool /*aAssociated*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::SetControlEnabled(IDvInvocation& /*aResponse*/, TBool /*aEnabled*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::GetControlEnabled(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aEnabled*/)
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

