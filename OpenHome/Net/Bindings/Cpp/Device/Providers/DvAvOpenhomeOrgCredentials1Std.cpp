#include "DvAvOpenhomeOrgCredentials1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgCredentials1Cpp::SetPropertyIds(const std::string& aValue)
{
    ASSERT(iPropertyIds != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyIds, buf);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetPropertyIds(std::string& aValue)
{
    ASSERT(iPropertyIds != NULL);
    const Brx& val = iPropertyIds->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgCredentials1Cpp::SetPropertyPublicKey(const std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPublicKey, buf);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetPropertyPublicKey(std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    const Brx& val = iPropertyPublicKey->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgCredentials1Cpp::SetPropertySequenceNumber(uint32_t aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    return SetPropertyUint(*iPropertySequenceNumber, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetPropertySequenceNumber(uint32_t& aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    aValue = iPropertySequenceNumber->Value();
}

DvProviderAvOpenhomeOrgCredentials1Cpp::DvProviderAvOpenhomeOrgCredentials1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Credentials", 1)
{
    iPropertyIds = NULL;
    iPropertyPublicKey = NULL;
    iPropertySequenceNumber = NULL;
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnablePropertyIds()
{
    iPropertyIds = new PropertyString(new ParameterString("Ids"));
    iService->AddProperty(iPropertyIds); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnablePropertySequenceNumber()
{
    iPropertySequenceNumber = new PropertyUint(new ParameterUint("SequenceNumber"));
    iService->AddProperty(iPropertySequenceNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("UserName"));
    action->AddInputParameter(new ParameterBinary("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionClear()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterString("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionSetEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnabled");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterBool("Enabled"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoSetEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionGet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Get");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("UserName"));
    action->AddOutputParameter(new ParameterBinary("Password"));
    action->AddOutputParameter(new ParameterBool("Enabled"));
    action->AddOutputParameter(new ParameterString("Status"));
    action->AddOutputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoGet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionLogin()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Login");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("Token"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionReLogin()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReLogin");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("CurrentToken"));
    action->AddOutputParameter(new ParameterString("NewToken"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoReLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionGetIds()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIds");
    action->AddOutputParameter(new ParameterRelated("Ids", *iPropertyIds));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetIds);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::EnableActionGetSequenceNumber()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSequenceNumber");
    action->AddOutputParameter(new ParameterRelated("SequenceNumber", *iPropertySequenceNumber));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetSequenceNumber);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoSet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    Brhz buf_UserName;
    aInvocation.InvocationReadString("UserName", buf_UserName);
    std::string UserName((const char*)buf_UserName.Ptr(), buf_UserName.Bytes());
    Brh buf_Password;
    aInvocation.InvocationReadBinary("Password", buf_Password);
    std::string Password((const char*)buf_Password.Ptr(), buf_Password.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Set(invocation, Id, UserName, Password);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoClear(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Clear(invocation, Id);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoSetEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    bool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetEnabled(invocation, Id, Enabled);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoGet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respUserName;
    std::string respPassword;
    bool respEnabled;
    std::string respStatus;
    std::string respData;
    DvInvocationStd invocation(aInvocation);
    Get(invocation, Id, respUserName, respPassword, respEnabled, respStatus, respData);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterUserName(aInvocation, "UserName");
    Brn buf_UserName((const TByte*)respUserName.c_str(), (TUint)respUserName.length());
    respWriterUserName.Write(buf_UserName);
    aInvocation.InvocationWriteStringEnd("UserName");
    DviInvocationResponseBinary respWriterPassword(aInvocation, "Password");
    Brn buf_Password((const TByte*)respPassword.c_str(), (TUint)respPassword.length());
    respWriterPassword.Write(buf_Password);
    aInvocation.InvocationWriteBinaryEnd("Password");
    DviInvocationResponseBool respWriterEnabled(aInvocation, "Enabled");
    respWriterEnabled.Write(respEnabled);
    DviInvocationResponseString respWriterStatus(aInvocation, "Status");
    Brn buf_Status((const TByte*)respStatus.c_str(), (TUint)respStatus.length());
    respWriterStatus.Write(buf_Status);
    aInvocation.InvocationWriteStringEnd("Status");
    DviInvocationResponseString respWriterData(aInvocation, "Data");
    Brn buf_Data((const TByte*)respData.c_str(), (TUint)respData.length());
    respWriterData.Write(buf_Data);
    aInvocation.InvocationWriteStringEnd("Data");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoLogin(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respToken;
    DvInvocationStd invocation(aInvocation);
    Login(invocation, Id, respToken);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterToken(aInvocation, "Token");
    Brn buf_Token((const TByte*)respToken.c_str(), (TUint)respToken.length());
    respWriterToken.Write(buf_Token);
    aInvocation.InvocationWriteStringEnd("Token");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoReLogin(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Id;
    aInvocation.InvocationReadString("Id", buf_Id);
    std::string Id((const char*)buf_Id.Ptr(), buf_Id.Bytes());
    Brhz buf_CurrentToken;
    aInvocation.InvocationReadString("CurrentToken", buf_CurrentToken);
    std::string CurrentToken((const char*)buf_CurrentToken.Ptr(), buf_CurrentToken.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respNewToken;
    DvInvocationStd invocation(aInvocation);
    ReLogin(invocation, Id, CurrentToken, respNewToken);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNewToken(aInvocation, "NewToken");
    Brn buf_NewToken((const TByte*)respNewToken.c_str(), (TUint)respNewToken.length());
    respWriterNewToken.Write(buf_NewToken);
    aInvocation.InvocationWriteStringEnd("NewToken");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetIds(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respIds;
    DvInvocationStd invocation(aInvocation);
    GetIds(invocation, respIds);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterIds(aInvocation, "Ids");
    Brn buf_Ids((const TByte*)respIds.c_str(), (TUint)respIds.length());
    respWriterIds.Write(buf_Ids);
    aInvocation.InvocationWriteStringEnd("Ids");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetPublicKey(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgCredentials1Cpp::DoGetSequenceNumber(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respSequenceNumber;
    DvInvocationStd invocation(aInvocation);
    GetSequenceNumber(invocation, respSequenceNumber);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterSequenceNumber(aInvocation, "SequenceNumber");
    respWriterSequenceNumber.Write(respSequenceNumber);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::Set(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/, const std::string& /*aUserName*/, const std::string& /*aPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::Clear(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::SetEnabled(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/, bool /*aEnabled*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::Get(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/, std::string& /*aUserName*/, std::string& /*aPassword*/, bool& /*aEnabled*/, std::string& /*aStatus*/, std::string& /*aData*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::Login(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/, std::string& /*aToken*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::ReLogin(IDvInvocationStd& /*aInvocation*/, const std::string& /*aId*/, const std::string& /*aCurrentToken*/, std::string& /*aNewToken*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetIds(IDvInvocationStd& /*aInvocation*/, std::string& /*aIds*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetPublicKey(IDvInvocationStd& /*aInvocation*/, std::string& /*aPublicKey*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1Cpp::GetSequenceNumber(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aSequenceNumber*/)
{
    ASSERTS();
}

